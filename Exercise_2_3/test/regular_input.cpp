/*
 * regular_input.cpp
 *
 *  Created on: 11 Oct 2016
 *      Author: matthias
 */


#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "FileGenerator.h"
#include <fstream>
#include <iostream>
#include <string>

#include "../include/WordCounter.h"

BOOST_AUTO_TEST_SUITE(regular_input)

BOOST_AUTO_TEST_CASE(fileWithFiveWords)
{
	std::string fileName = "test.txt";
	FileGenerator::createFile(fileName,"This file contains five words");

	WordCounter counter(fileName);
	int cnt = counter.numWords();

	BOOST_CHECK(cnt == 5);
}

BOOST_AUTO_TEST_CASE(fileWithAMilliondWords){
	std::string fileName = "largeFile.txt";
	std::string largeString = "Hello";

	int oneMillion = 1000 * 1000;
	for(int i = 1; i < oneMillion; i++){
		largeString.append(" Hello");
	}
	FileGenerator::createFile(fileName,largeString);

	WordCounter counter(fileName);

	BOOST_CHECK(counter.numWords() == oneMillion);
}

BOOST_AUTO_TEST_SUITE_END()


