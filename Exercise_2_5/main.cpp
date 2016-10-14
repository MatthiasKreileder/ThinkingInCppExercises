

#include <iostream>
#include "include/BackwardsPrinter.h"

int main (int argc, char* argv[])
{

	std::vector<std::string> inputFiles;
	if(argc < 2){
		std::cout << "Please provide a file name as a command line argument." << std::endl;
		std::cout << "E.g. your file is called 'yourfile.txt' then invoke the program like this:" << std::endl;
		std::cout << "$ ./backwards_printer yourfile.txt" << std::endl;
		return 0;
	}
	else{
		for(int i = 0; i < (argc-1); i++){
			BackwardsPrinter bp(std::string(argv[i+1]));
			bp.print();
		}
	}
	return 0;
}
