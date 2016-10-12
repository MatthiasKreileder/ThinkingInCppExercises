
#ifndef INCLUDE_WORD_COUNTER
#define INCLUDE_WORD_COUNTER

#include <string>


class WordCounter{
public:
	WordCounter(std::string fileName);
	
	/**
	 * Returns the number of words contained in the provided input file
	 */
	int numWords(void);
private:

	/**
	 * \brief Returns true if \param s is a "word" (according to the def in the README)
	 */
	bool isWord(std::string s);

	std::string m_fileName;
};

#endif
