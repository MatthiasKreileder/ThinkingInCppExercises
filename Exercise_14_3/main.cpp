
#include <iostream>

/**
 * Top
 */
class Top{
public:
	Top();
	~Top();
};
Top::Top(){std::cout << "Top()" << std::endl;}
Top::~Top(){std::cout << "~Top()" << std::endl;}

/**
 * Middle is a Top
 */
class Middle : public Top {
public:
	Middle();
	~Middle();
};
Middle::Middle(){std::cout << "Middle()" << std::endl;}
Middle::~Middle(){std::cout << "~Middle()" << std::endl;}

/**
 * Bottom is a Middle
 */
class Bottom : public Middle {
public:
	Bottom();
	~Bottom();
};
Bottom::Bottom(){std::cout << "Bottom()" << std::endl;}
Bottom::~Bottom(){std::cout << "~Bottom()" << std::endl;}

int main(){

	Bottom bottom;

	return 0;
}
