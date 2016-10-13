
#include <iostream>
#include <string>
#include <vector>
#include "include/WordCounter.h"

int main (int argc, char* argv[])
{
	/**
	 * Read names of input files
	 */
	std::vector<std::string> inputFiles;
	if(argc < 2){
		std::cout << "Please provide a file name as a command line argument." << std::endl;
		std::cout << "E.g. your file is called 'yourfile.txt' then invoke the program like this:" << std::endl;
		std::cout << "$ ./exe yourfile.txt" << std::endl;
		return 0;
	}
	else{
		for(int i = 0; i < (argc-1); i++){
			inputFiles.push_back(std::string(argv[i+1]));
		}
	}

	/**
	 * Count words and print results
	 */
	for(std::vector<std::string>::size_type i = 0; i < inputFiles.size(); i++){
		WordCounter counter(inputFiles[i]);
		int numWords = counter.numWords();

		std::string words;
		(numWords == 1) ? words = "word" : words = "words";
		if(numWords != -1)
			std::cout << inputFiles[i] << " contains " << numWords << " " << words << std::endl;
		else
			std::cout << inputFiles[i] << " does not exist or could not be processed for some other reason (I am sorry)" << std::endl;
	}

	return 0;
}
