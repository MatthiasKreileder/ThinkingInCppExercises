/*
 * FileGenerator.h
 *
 *  Created on: 11 Oct 2016
 *      Author: matthias
 */

#ifndef TEST_FILEGENERATOR_H_
#define TEST_FILEGENERATOR_H_

#include <string>

/**
 * Given a filename and a string an instance of this class
 * creates a file with the provided string as the contents
 */
class FileGenerator {
public:
	static void createFile(std::string fileName, std::string fileContents);
private:
	FileGenerator();
};

#endif /* TEST_FILEGENERATOR_H_ */
