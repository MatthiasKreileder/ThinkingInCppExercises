
#include "include/foo.h"
#include "include/bar.h"
#include "include/add.h"
#include <iostream>
int main ()
{
	sayFoo();
	sayBar();
	std::cout << "add(3,3) = " << add(3,3) << std::endl;
	return 0;
}
