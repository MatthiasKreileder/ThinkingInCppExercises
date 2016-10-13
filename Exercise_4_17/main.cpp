
#include <iostream>
#include <typeinfo>

template<typename T>
void printAddr(T ptr){
	std::cout << "Address of " << typeid(ptr).name() << ": " << ptr << std::endl;
}

/**
 * We want to print the address stored inside \param charPtr. Operator << wants to be helpful and interprets char* as a C string
 * => we need a template specialisation which circumvents the helpfulness of operator<<
 */ 
template<>
void printAddr(char* charPtr){
	std::cout << "Address of " << typeid(charPtr).name() << ": " << static_cast<void *>(charPtr) << std::endl;
}

int main(){

	/**
	 *	Allocating objects on the heap 
	 */

	int* intPtr = new int;
	long* longPtr = new long;
	char* charPtrToArray = new char[100];
	float* floatPtrToArray = new float[100];

	/**
	 * 	Printing addresses
	 */ 

	printAddr(intPtr);
	printAddr(longPtr);
	printAddr(charPtrToArray);
	printAddr(floatPtrToArray);

	/**
	 * 	Free occupied heap storage - and remember which pointers point to a single object
	 * 	and which one point to an array of objects
	 */ 
	delete intPtr;
	delete longPtr;
	delete [] charPtrToArray;
	delete [] floatPtrToArray;

	return 0;
}
