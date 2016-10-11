
#ifndef INCLUDE_WORD_COUNTER
#define INCLUDE_WORD_COUNTER

#include <string>
#include <fstream>

class WordCounter{
public:
	WordCounter(std::string fileName);
	
	/**
	 * Returns the number of words contained in the provided input file
	 */
	int numWords(void);
private:
	
	int numWordsPriv(void);

	std::ifstream m_inputFile;
	bool m_invalidFileHandle;
};

#endif
