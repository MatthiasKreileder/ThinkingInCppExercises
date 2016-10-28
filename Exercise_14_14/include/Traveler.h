/*
 * Traveler.h
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#ifndef TRAVELER_H_
#define TRAVELER_H_

#include <iostream>
#include <string>

class Traveler {
public:
	Traveler(std::string s);
	Traveler(const Traveler& traveler);
	Traveler& operator= (const Traveler& traveler);
	virtual ~Traveler();

	// stream a Traveler to std::cout
	void printTraveler();

	// getter for unit testing
	std::string getTravelerString() const;

private:
	std::string m_travelerString;
};

#endif /* TRAVELER_H_ */
