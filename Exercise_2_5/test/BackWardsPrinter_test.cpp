#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include <vector>
#include <string>
#include "FileGenerator.h"
#include "../include/BackwardsPrinter.h"
BOOST_AUTO_TEST_SUITE(test_suite)
BOOST_AUTO_TEST_CASE(regularInput)
{
	std::string fileName = "someFile.txt";
	std::string content = "My\nname\nis\nMatt";
	FileGenerator::createFile(fileName,content);

	std::vector<std::string> expectedResult;
	expectedResult.push_back("Matt");
	expectedResult.push_back("is");
	expectedResult.push_back("name");
	expectedResult.push_back("My");

	BackwardsPrinter bp(fileName);
	std::vector<std::string> revCont = bp.getReversedContents();
	for(std::vector<std::string>::size_type i = 0; i < revCont.size(); i++){
		BOOST_CHECK(revCont[i].compare(expectedResult[i]) == 0);
	}
}

BOOST_AUTO_TEST_SUITE_END()
