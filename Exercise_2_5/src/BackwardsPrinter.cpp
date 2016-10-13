
#include "../include/BackwardsPrinter.h"

#include <fstream>
#include <stack>
#include <iostream>
BackwardsPrinter::BackwardsPrinter(std::string fileName)
: m_fileName(fileName)
{
}

void BackwardsPrinter::print(void){
	std::vector<std::string> revCont = getReversedContents();
	for(std::vector<std::string>::size_type i = 0; i < revCont.size(); i++)
		std::cout << revCont[i] << std::endl;
}

std::vector<std::string> BackwardsPrinter::getReversedContents(){
	std::vector<std::string> revCont;

	std::stack<std::string> cont;
	std::ifstream in(m_fileName.c_str());
	std::string line;
	while(getline(in,line)){
		cont.push(line);
	}


	while(!cont.empty()){
		revCont.push_back(cont.top());
		cont.pop();
	}


	return revCont;
}
