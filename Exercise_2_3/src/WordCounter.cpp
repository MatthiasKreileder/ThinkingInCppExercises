
#include "../include/WordCounter.h"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctype.h>
#include <fstream>
WordCounter::WordCounter(std::string fileName)
	: m_fileName(fileName)
{
}

int WordCounter::numWords(void){

	std::ifstream inFile;
	inFile.open(m_fileName.c_str());
	// did 'open()' succeed?
	if(!inFile)
		return -1;

	// cnt holds the number of words we encounter while
	// we walk along the file
	int cnt = 0;
	while(!inFile.eof()){
		std::string tmp;
		inFile >> tmp;

		// count only non-empty strings (this is an edge case in case the input file is empty
		// and
		// be aware on non-alphabetic characters
		if(tmp.compare("") == 0 || !isWord(tmp))
			continue;

		++cnt;
	}

	inFile.close();
	return cnt;
}

bool WordCounter::isWord(std::string s){
	for(std::string::size_type i = 0; i < s.size(); i++){
		if(isalpha(s[i])){
			// encountered an alphabetic character => that is a word according to our definition
			return true;
		}
	}

	// made it here => not a word
	return false;
}




