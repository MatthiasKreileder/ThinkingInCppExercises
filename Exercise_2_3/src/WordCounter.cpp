
#include "../include/WordCounter.h"
#include <iostream>
#include <exception>
#include <cstdlib>
WordCounter::WordCounter(std::string fileName) : m_invalidFileHandle(false){
	
	m_inputFile.open(fileName.c_str());

	// check if we were able to open the file
	if(!m_inputFile)
		m_invalidFileHandle = true;


	
}

int WordCounter::numWordsPriv(void){
	int cnt = 0;
	
	while(!m_inputFile.eof()){
		std::string tmp;
		m_inputFile >> tmp;

		// count only non-empty strings (this is an edge case in case the input file is empty
		if(tmp.compare("") != 0)
			cnt++;
	}

	return cnt;
}

int WordCounter::numWords(void){
	if(m_invalidFileHandle)
		return -1;
	else
		return numWordsPriv();
}
