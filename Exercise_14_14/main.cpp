
#include <iostream>
#include <string>
#include <vector>

#include "include/BusinessTraveler.h"
int main (int argc, char* argv[])
{
	BusinessTraveler first("first");
	BusinessTraveler second("second");
	second = first;

	std::cout << "contents of the object named first: " << first;
	std::cout << "contents of the object named second: " << second;

	return 0;
}
