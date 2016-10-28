/*
 * copy_operations_test_suite.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */


#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <iostream>
#include <string>

#include "../include/Traveler.h"
#include "../include/Pager.h"
#include "../include/BusinessTraveler.h"

BOOST_AUTO_TEST_SUITE(copy_operations_test_suite)

BOOST_AUTO_TEST_CASE(Traveler_copy_ctor)
{
	// original object
	std::string travelerString = "string for traveler";
	Traveler traveler (travelerString);

	// copy constructed second traveler
	Traveler copiedTraveler(traveler);
	bool isEqual = false;
	if(!travelerString.compare(copiedTraveler.getTravelerString()))
		isEqual = true;

	BOOST_CHECK(isEqual);
}

BOOST_AUTO_TEST_CASE(Traveler_copy_assignment)
{
	// original object
	std::string travelerString = "string for traveler";
	Traveler traveler (travelerString);

	Traveler assigmentCreatedTraveler ("original string");
	assigmentCreatedTraveler = traveler;

	bool isEqual = false;
	if(!travelerString.compare(assigmentCreatedTraveler.getTravelerString()))
		isEqual = true;

	BOOST_CHECK(isEqual);
}

BOOST_AUTO_TEST_CASE(BusinessTraveler_copy_ctor)
{
	std::string businessTravString = "string for first business traveler";
	BusinessTraveler firstBt(businessTravString);

	// create a copy
	BusinessTraveler secondBt(firstBt);

	BOOST_CHECK(!businessTravString.compare(secondBt.getStringFromTraveler()));
	BOOST_CHECK(!businessTravString.compare(secondBt.getStringFromPager()));
}

BOOST_AUTO_TEST_CASE(BusinessTraveler_copy_assignment)
{
	std::string businessTravString = "string for first business traveler";
	BusinessTraveler firstBt(businessTravString);

	// create a copy
	BusinessTraveler secondBt("string that will be overwritten");
	secondBt = firstBt;

	BOOST_CHECK(!businessTravString.compare(secondBt.getStringFromTraveler()));
	BOOST_CHECK(!businessTravString.compare(secondBt.getStringFromPager()));
}

BOOST_AUTO_TEST_SUITE_END()









