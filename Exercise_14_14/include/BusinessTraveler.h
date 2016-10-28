/*
 * BusinessTraveler.h
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#ifndef BUSINESSTRAVELER_H_
#define BUSINESSTRAVELER_H_

#include "Traveler.h"
#include "Pager.h"

#include <string>
#include <iostream>
class BusinessTraveler : Traveler {
public:
	BusinessTraveler();
	BusinessTraveler(std::string s);
	BusinessTraveler(const BusinessTraveler& bt);
	BusinessTraveler& operator=(const BusinessTraveler& bt);
	virtual ~BusinessTraveler();

	std::string getStringFromPager() const;
	std::string getStringFromTraveler() const;

private:
	Pager m_pager;
};

std::ostream& operator<<(std::ostream& os, const BusinessTraveler& bt);

#endif /* BUSINESSTRAVELER_H_ */
