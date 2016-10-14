
#include <iostream>

/*

// Version I
// Calulator implemented via function overloading
class Calculator
{
public:
	int add(){return 0;}
	int add(int a){return a;}
	int add(int a, int b){return (a+b);}
	int add(int a, int b, int c){return (a+b+c);}
};
*/

// Version II
// Calculator implemented via default arguments
class Calculator
{
public:
	int add(int a = 0, int b = 0, int c = 0){return (a+b+c);}
};

int main ()
{
	Calculator cal;
	std::cout << cal.add() << std::endl;
	std::cout << cal.add(1) << std::endl;
	std::cout << cal.add(1,1) << std::endl;
	std::cout << cal.add(1,1,1) << std::endl;
	return 0;
}
