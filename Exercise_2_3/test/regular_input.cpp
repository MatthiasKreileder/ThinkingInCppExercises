/*
 * regular_input.cpp
 *
 *  Created on: 11 Oct 2016
 *      Author: matthias
 */


#define BOOST_TEST_DYN_LINK
#include <boost_install_dir/include/boost/test/unit_test.hpp>
#include "../include/add.h"
#include "FileGenerator.h"
#include <fstream>
#include <iostream>
#include <string>
BOOST_AUTO_TEST_SUITE(regular_input)

BOOST_AUTO_TEST_CASE(universeInOrder)
{
	FileGenerator::createFile("test.txt","Those words are the content");
	std::ifstream inputFile;
	inputFile.open("test.txt");


//	std::cout << "Start reading from file" << std::endl;
//	std::string tmp;
//	inputFile >> tmp;
//	std::cout << tmp << std::endl;


    BOOST_CHECK(add(1,1) == 3);
}

BOOST_AUTO_TEST_SUITE_END()


