/* Author @Clark Jason Ngo

Assuming that a text file named FIRST.TXT contains some text written into it,
write a class and a method named vowelwords(), that reads the file FIRST.TXT and creates a new file named SECOND.TXT,
to contain only those words from the file FIRST.TXT
which start with a lowercase vowel (i.e., with 'a', 'e', 'i', 'o', 'u').
For example, if the file FIRST.TXT contains Carry umbrella and overcoat when it rains
Then the file SECOND.TXT shall contain umbrella and overcoat it.

*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

bool getFileContent(string fileName, vector<string> & vecOfStrs)
{

	// Open the File
	ifstream in(fileName.c_str());

	// Check if object is valid
	if(!in)
	{
		cerr << "Cannot open the File : "<<fileName<<endl;
		return false;
	}

	string str;
	// Read the next word from File untill it reaches the end.
	while (in >> str)
	{
		vecOfStrs.push_back(str);
	}
	//Close The File
	in.close();
	return true;
}

int main()
{

	vector<string> vecOfStr;

	// Get the contents of file in a vector
	bool result = getFileContent("FIRST.txt", vecOfStr);

	if(result)
	{
        vector<string> example;

		// Iterate over vector
		for(string & word : vecOfStr)
            // if word starts at any lowercase vowel
            if (word.at(0) == 'a' || word.at(0) == 'e' || word.at(0) == 'i' || word.at(0) == 'o' || word.at(0) == 'u')
                // add to vector
			    example.push_back(word);

        // Create a new file and copy all vector elements in the new file
        ofstream output_file("./SECOND.txt");
        ostream_iterator<string> output_iterator(output_file, "\n");
        copy(example.begin(), example.end(), output_iterator);
	}
}
