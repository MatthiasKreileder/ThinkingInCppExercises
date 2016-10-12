/*
 * newline_test.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: matthias
 */


#define BOOST_TEST_DYN_LINK
#include <boost_install_dir/include/boost/test/unit_test.hpp>

#include "FileGenerator.h"
#include <fstream>
#include <iostream>
#include <string>

#include "../include/WordCounter.h"

BOOST_AUTO_TEST_SUITE(newline_test)

BOOST_AUTO_TEST_CASE(two_words_separated_by_newline)
{
	std::string fileName = "two_words_separated_by_newline.txt";
	std::string fileContent = "Hello \n World";
	FileGenerator::createFile(fileName,fileContent);

	WordCounter counter(fileName);

	int num = counter.numWords();

	BOOST_CHECK(num == 2);
}

BOOST_AUTO_TEST_SUITE_END()




