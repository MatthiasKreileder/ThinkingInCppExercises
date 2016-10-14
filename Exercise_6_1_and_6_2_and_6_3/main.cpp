
#include <iostream>

/////////////////////////////////////////////////
//
//	6.1
//
/////////////////////////////////////////////////
class Simple6_1
{
public:
		Simple6_1();
};

Simple6_1::Simple6_1()
{
	std::cout << "Simple6_1 constructor" << std::endl;
}

/////////////////////////////////////////////////
//
//	6.2
//
/////////////////////////////////////////////////
class Simple6_2
{
public:
	Simple6_2();
	~Simple6_2();
};
Simple6_2::Simple6_2(){std::cout << "Simple6_2 constructor" << std::endl;}
Simple6_2::~Simple6_2(){std::cout << "Simple6_2 destructor" << std::endl;}

/////////////////////////////////////////////////
//
//	6.3
//
/////////////////////////////////////////////////
class Simple6_3
{
public:
	Simple6_3(int i);
	~Simple6_3();
private:
	int i;
};
Simple6_3::Simple6_3(int i)
: i(i)
{std::cout << "Simple6_3 constructor called with argument: " << this->i << std::endl;}
Simple6_3::~Simple6_3(){std::cout << "Simple6_3 destructor called. Member variable i has value = " << this->i << std::endl;}


int main(){
	
	Simple6_1 simple6_1;
	Simple6_2 simple6_2;
	Simple6_3 simple6_3(1000);
	
	return 0;
}
