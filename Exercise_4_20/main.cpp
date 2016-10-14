
#include <iostream>

struct OneInteger{
	int i;
};

struct OneIntegerAndAPointerToInt{
	int i;
	int* pI;
};

struct OneIntegerAndAFunction{
	int i;
	int addition(int a, int b);
};

int OneIntegerAndAFunction::addition(int a, int b){
	return a + b;
}

struct OneFunction{
	int addition(int a, int b);
};

int OneFunction::addition(int a, int b){
	return a + b;
}

int main (){
	
	OneInteger oneInt;
	std::cout << "sizeof(OneInteger) = " << sizeof(oneInt) << std::endl;
	
	OneIntegerAndAPointerToInt oneIntAndAPointerToInt;
	std::cout << "sizeof(OneIntegerAndAPointerToInt) = " << sizeof(OneIntegerAndAPointerToInt) << std::endl;
	
	OneIntegerAndAFunction intAndFunc;
	std::cout << "sizeof(OneIntegerAndAFunction) = " << sizeof(OneIntegerAndAFunction) << std::endl;
	
	OneFunction oneFunc;
	std::cout << "sizeof(OneFunction) = " << sizeof(OneFunction) << std::endl;

	return 0;
}
