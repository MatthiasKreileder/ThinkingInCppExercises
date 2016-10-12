/*
 * bad_input.cpp
 *
 *  Created on: 11 Oct 2016
 *      Author: matthias
 */

#define BOOST_TEST_DYN_LINK
#include <boost_install_dir/include/boost/test/unit_test.hpp>

#include "FileGenerator.h"
#include <fstream>
#include <iostream>
#include <string>

#include "../include/WordCounter.h"

BOOST_AUTO_TEST_SUITE(bad_input)

BOOST_AUTO_TEST_CASE(empty_input)
{
	std::string fileName = "empyt_file.txt";
	std::string emptyString = "";
	FileGenerator::createFile(fileName,emptyString);

	WordCounter counter(fileName);

	int num = counter.numWords();

	BOOST_CHECK(num == 0);
}

BOOST_AUTO_TEST_CASE(non_existing_input_file)
{
	std::string fileName = "non_existing_input_file.txt";

	WordCounter counter(fileName);
	int num = counter.numWords();

	BOOST_CHECK(num == -1);
}

BOOST_AUTO_TEST_CASE(non_alpha_characters)
{
	std::string fileName = "non_alpha_characters.txt";
	std::string content = "Hello ! ###World### ###";
	FileGenerator::createFile(fileName,content);

	WordCounter counter(fileName);
	int num = counter.numWords();

	BOOST_CHECK(num == 2);
}

BOOST_AUTO_TEST_SUITE_END()

