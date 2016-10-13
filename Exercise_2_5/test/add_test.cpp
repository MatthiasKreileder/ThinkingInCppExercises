#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>	

#include "../include/add.h"
BOOST_AUTO_TEST_SUITE(test1_suite)
BOOST_AUTO_TEST_CASE(universeInOrder)
{
    BOOST_CHECK(add(1,1) == 3);
}
BOOST_AUTO_TEST_CASE(anotherTest)
{
    BOOST_CHECK(add(1,2) == 3);
}

BOOST_AUTO_TEST_CASE(thirdTest)
{
    BOOST_CHECK(add(1,2) != 3);
}

BOOST_AUTO_TEST_CASE(fourthTest)
{
    BOOST_CHECK(add(1,2) == 3);
}
BOOST_AUTO_TEST_CASE(fifthTest)
{
    BOOST_CHECK(add(1,2) == 3);
}
BOOST_AUTO_TEST_SUITE_END()
