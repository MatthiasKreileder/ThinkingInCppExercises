#define BOOST_TEST_DYN_LINK
//#define BOOST_TEST_MODULE Hello

#include <boost_install_dir/include/boost/test/unit_test.hpp>	
//#include "test_main.cpp"
#include "../include/add.h"
BOOST_AUTO_TEST_SUITE(test1_suite)

BOOST_AUTO_TEST_CASE(anotherTest)
{
    BOOST_CHECK(add(1,2) == 3);
}

BOOST_AUTO_TEST_SUITE_END()
