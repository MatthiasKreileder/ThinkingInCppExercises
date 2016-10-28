/*
 * Pager.cpp
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#include "../include/Pager.h"

Pager::Pager(std::string s)
: m_pagerString(s)
{}

Pager::~Pager() {}

Pager::Pager(const Pager& pager)
: m_pagerString(pager.m_pagerString)
{}

Pager& Pager::operator=(const Pager& pager){
	m_pagerString = pager.m_pagerString;
	return *this;
}

std::string Pager::getPagerString() const{
	return m_pagerString;
}
