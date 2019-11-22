/* Author @Clark Jason Ngo

Assuming that a text file named FIRST.TXT contains some text written into it,
write a class and a method named vowelwords(), that reads the file FIRST.TXT and creates a new file named SECOND.TXT,
to contain only those words from the file FIRST.TXT
which start with a lowercase vowel (i.e., with 'a', 'e', 'i', 'o', 'u').
For example, if the file FIRST.TXT contains Carry umbrella and overcoat when it rains
Then the file SECOND.TXT shall contain umbrella and overcoat it.

*/

#include "VowelWords.h"

int main()
{
    // create an object Vowel Words
    // 1st parameter is the file to be read
    // 2nd parameter is the new filename to be created
    // the new file will have the filtered contents of the file read
    VowelWords vw("FIRST.txt", "SECOND.txt");
    vw.run();

}
