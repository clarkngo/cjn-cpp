// Author @Clark Jason Ngo
#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
	public:
		Palindrome();									// constructor
		void setWord();			  // get user input as integer years
		void isPalindrome();		// days converted to years, months, and days
		void printResult();				// print years, months, and days to user
	private:
		string _word;
    bool _isPalindrome;
};

Palindrome::Palindrome()
{   // initialize data members upon creation of object
    _word = "";
    _isPalindrome = true;
}

void Palindrome::setWord()
{
    string input;
    cout << "Enter a word in all lowercase or UPPERCASE: "; // prompt user for input
    cin >> input;
    _word = input;
}

void Palindrome::isPalindrome()
{
    const int MID_LENGTH = _word.length() / 2;  // iterate half the length of the string
    int j = _word.length() - 1;                 // index at the end

    // loop through the string with pointers at the front (i)
    // and at the back (j)
    // (i) keeps incrementing while (j) keeps decrementing
    // until they reach the middle
    for (int i = 0; i < MID_LENGTH; i++ )
    { // check if characters at i and at j are the same
      // NOTE: only works if the same case (i.e. lowercase or UPPERCASE)
      if (_word[i] == _word[j])
      {
        j--;          // move the back pointer towards the middle
        continue;     // keep iterating if characters are equal
      }
      else
      {
        _isPalindrome = false;    // if characters don't match, it is not a palindrome
        break;
      }
    }
}

void Palindrome::printResult()
{
    string isNOT;
    if (_isPalindrome == false)
    {
      isNOT = " NOT";
    }
    cout << "The word '" << _word << "' is"<< isNOT <<  " a Palindrome." << endl;
}

int main()
{
    // Program 3
    cout << "Program (3)\n";
    Palindrome Palindrome1;               // create a new object Palindrome
    Palindrome1.setWord();                // ask user input for word string
    Palindrome1.isPalindrome();           // check if palindrome
    Palindrome1.printResult();            // print result if palindrome or not

}
