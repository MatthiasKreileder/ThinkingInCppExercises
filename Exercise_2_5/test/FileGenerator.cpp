/*
 * FileGenerator.cpp
 *
 *  Created on: 11 Oct 2016
 *      Author: matthias
 */

#include <iostream>
#include <fstream>

#include "FileGenerator.h"

void FileGenerator::createFile(std::string fileName, std::string fileContents){

	std::ofstream outputFile;
	outputFile.open(fileName.c_str());

	outputFile << fileContents;

	outputFile.close();
}

FileGenerator::FileGenerator() {
}
