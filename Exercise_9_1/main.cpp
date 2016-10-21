
#include <iostream>

#define F (x) (x + 1)
#define G(x) (x + 1)

int main ()
{
	int onePlusOne;

	/**
	 * Un-commenting this line leads to a compiler error message,
	 * because the preprocessor expands the macro call F(1) to
	 * '(x) (x + 1)(1)' which leads to problems for the compiler
	 *
	 * For starters 'x' can't be found in the compiler's
	 * symbol table and that's why he states:
	 * 'error: ‘x’ was not declared in this scope'
	 */
	//onePlusOne = F(1);
	onePlusOne = G(1);

	std::cout << "(1 + 1) = " << onePlusOne << "\nWho knew :D ?" << std::endl;

	return 0;
}
