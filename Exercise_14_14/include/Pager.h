/*
 * Pager.h
 *
 *  Created on: 28 Oct 2016
 *      Author: matt
 */

#ifndef PAGER_H_
#define PAGER_H_

#include <string>

class Pager {
public:
	Pager(std::string s);
	Pager(const Pager& pager);
	Pager& operator=(const Pager& pager);
	virtual ~Pager();

	std::string getPagerString() const;

private:
	std::string m_pagerString;
};

#endif /* PAGER_H_ */
