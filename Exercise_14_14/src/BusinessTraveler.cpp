/*
 * BusinessTraveler.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#include "../include/BusinessTraveler.h"

BusinessTraveler::BusinessTraveler()
:  Traveler(""),
   m_pager("")
{}

BusinessTraveler::BusinessTraveler(std::string s)
:	Traveler(s),
	m_pager(s)
{}

BusinessTraveler::~BusinessTraveler() {}

BusinessTraveler::BusinessTraveler(const BusinessTraveler& bt)
: Traveler(bt),
  m_pager(bt.m_pager)
{}

BusinessTraveler& BusinessTraveler::operator=(const BusinessTraveler& bt)
{
	// copy assignemt for the base class members which are private (another solution would be to make them protected)
	this->Traveler::operator=(bt);
	m_pager = bt.m_pager;
}

std::string BusinessTraveler::getStringFromPager() const{
	return m_pager.getPagerString();
}

std::string BusinessTraveler::getStringFromTraveler() const{
	return this->Traveler::getTravelerString();
}

std::ostream& operator<<(std::ostream& os, const BusinessTraveler& bt){
	os << "Traveler_string=" << bt.getStringFromTraveler() << " Pager_string=" << bt.getStringFromPager() << std::endl;
	return os;
}



