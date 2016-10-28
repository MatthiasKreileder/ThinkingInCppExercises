/*
 * Traveler.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#include "../include/Traveler.h"

Traveler::Traveler(std::string s)
: m_travelerString(s)
{}

Traveler::Traveler(const Traveler& traveler)
: m_travelerString(traveler.m_travelerString)
{}

Traveler& Traveler::operator= (const Traveler& traveler){
	m_travelerString = traveler.m_travelerString;
	return *this;
}
Traveler::~Traveler(){}

void Traveler::printTraveler()
{
	std::cout << m_travelerString << std::endl;
}

std::string Traveler::getTravelerString() const{
	return m_travelerString;
}
