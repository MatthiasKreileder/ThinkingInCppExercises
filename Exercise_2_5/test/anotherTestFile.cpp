#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>	

BOOST_AUTO_TEST_SUITE(test2_suite)

BOOST_AUTO_TEST_CASE(Test1)
{
    BOOST_CHECK(1>2);
}

BOOST_AUTO_TEST_SUITE_END()	
