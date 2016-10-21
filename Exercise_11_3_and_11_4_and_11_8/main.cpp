
#include <iostream>

int& incrementInt(int* intToIncrement){
	++(*intToIncrement);
	return *intToIncrement;
}

void turnArgumentIntoTheLetterA(char& letter){
	letter = 'a';
}

int main ()
{
	/**
	 * Question 11.3
	 */
	std::cout << "\nQuestion 11.3" << std::endl;

	// Trying to create a reference without initialising it
	// quoting g++ 'error: ‘uninitializedReference’ declared as reference but not initialized'
	//int& uninitializedReference;


	// Trying! to redirect reference - The idea of a reference is that is must be initialized when it is
	// declared and that it can't be changed later (that's what I understood) - hence I don't know what kind
	// of syntax to use to 'change a reference' the only thing I know is how to change the value through the
	// reference
	int one = 1;
	int& referenceThatWillChange = one;

	std::cout << "referenceThatWillChange = " << referenceThatWillChange << std::endl;

	int two = 2;
	referenceThatWillChange = two;
	std::cout << "referenceThatWillChange = " << referenceThatWillChange << std::endl;

	/**
	 * Question 11.4
	 */
	std::cout << "\nQuestion 11.4" << std::endl;

	int intToInc = 10;
	std::cout << "intToInc = " << intToInc << std::endl;
	int& refToEleven = incrementInt(&intToInc);
	std::cout << "intToInc = " << refToEleven << std::endl;

	/**
	 * Question 11.8
	 * According to the book this code isn't very readable because the variable 'b' gets changed by
	 * turnArgumentIntoTheLetterA even though it looks like we leverage pass by value.
	 */
	std::cout << "\nQuestion 11.8" << std::endl;

	char b = 'b';
	std::cout << "b == " << b << std::endl;

	turnArgumentIntoTheLetterA(b);
	std::cout << "b != " << b << std::endl;

	return 0;
}
