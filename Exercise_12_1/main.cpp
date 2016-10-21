
#include <iostream>

class Integer{
public:
	Integer(int i){this->i = i;}
	Integer(const Integer& integer);

	/**
	 * Pre-increment operator
	 */
	Integer operator++();

	/**
	 * Post
	 */
	Integer operator++(int);

	int getInt() const {return i;}
private:
	int i;
};

Integer::Integer(const Integer& integer)
: i(integer.getInt())
{}

Integer Integer::operator++(){

	(this->i)++;
	return getInt();
}

std::ostream& operator<< (std::ostream& out,const Integer& integer){
	out << integer.getInt() << std::endl;
	return out;
}

Integer Integer::operator++(int){
	Integer copy (*this);

	++(*this);

	return copy;
}

int main ()
{
	Integer myInteger(0);
	std::cout << "myInteger = " << myInteger;

	/*
	 * Post increment
	 */
	std::cout << "Calling: myInteger++" << std::endl;
	std::cout << myInteger++;

	std::cout << "streaming myInteger to std::cout again (to see post increment)" << std::endl;
	std::cout << myInteger;

	/*
	 * Pre increment
	 */
	std::cout << "Calling ++myInteger" << std::endl;
	std::cout << ++myInteger;

	return 0;
}
