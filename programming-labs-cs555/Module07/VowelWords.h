// Author @Clark Jason Ngo
#pragma once
#include <iostream>
#include <fstream>          // file manipulations
#include <string>
#include <vector>
#include <iterator>         // iterator for vector
#include "VowelWords.h"
using namespace std;

class VowelWords
{
    public:
        VowelWords(string, string);     // param 1: file to be read, param 2: file to be created
        bool getFileContent(string fileName, vector<string> & vecOfStrs);   // read a file
        bool isFirstLetterLowerCaseVowel(string);
        void copyVectorToNewFile(vector<string> & vecStr);
        void run();
    private:
        vector<string> _vecOfStr;
        string _filename1;   // file to be read
        string _filename2;   // file to be created
};
