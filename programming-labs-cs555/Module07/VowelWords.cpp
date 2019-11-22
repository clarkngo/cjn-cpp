// Author @Clark Jason Ngo
#include "VowelWords.h"

VowelWords::VowelWords(string fn1, string fn2)
{
	_filename1 = fn1;	// file to be read
	_filename2 = fn2;	// file to be created
}

// extract contents from file and assign it to vector string
// a true value means that the file was opened and extracted
// a false value means that the intended file was not opened
bool VowelWords::getFileContent(string fileName, vector<string> & vecOfStrs)
{

	// Open the File
	ifstream in(fileName.c_str());

	// Check if object is valid
	if(!in)
	{
		// Give meaningful error message to user
		cerr << "Cannot open the File : " << fileName <<endl;
		return false;
	}

	string str;
	// Read the next word from File until it reaches the end.
	while (in >> str)
	{
		vecOfStrs.push_back(str);		// add string to vector string
	}
	//Close The File
	in.close();
	return true;
}

// check if first letter of the string is lower case
bool VowelWords::isFirstLetterLowerCaseVowel(string str)
{
	// if any of the vowels is present in the first letter of the word
	if (str.at(0) == 'a' || str.at(0) == 'e' || str.at(0) == 'i' || str.at(0) == 'o' || str.at(0) == 'u')
		return true;
	return false;
}

// Create a new file and copy all vector elements in the new file
void VowelWords::copyVectorToNewFile(vector<string> & vecStr)
{
	ofstream output_file(_filename2);
	ostream_iterator<string> output_iterator(output_file, "\n");
	copy(vecStr.begin(), vecStr.end(), output_iterator);
}

// run the VowelWords
void VowelWords::run()
{
	// check if file was valid and usable
	bool result = getFileContent(_filename1, _vecOfStr);

	// if file is valid, we can process it
	if(result)
	{
		// new vector to store filtered contents
        vector<string> newVecStr;

		// Iterate over vector
		for(string & word : _vecOfStr)
						// check if first letter of string is lower case
            if (isFirstLetterLowerCaseVowel(word))
                // add to vector
			    			newVecStr.push_back(word);

		// new vector string values will be added to the new file
		copyVectorToNewFile(newVecStr);

	}
}
