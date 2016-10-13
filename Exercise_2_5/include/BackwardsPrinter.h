
#ifndef INCLUDE_BACKWARDS_PRINTER_H
#define INCLUDE_BACKWARDS_PRINTER_H

#include <vector>
#include <string>

/**
 * Given a file name the BackwardsPrinter
 * prints a sequence of strings that are in the reversed
 * order than the strings in the provided file, i.e. if the file
 * contains this content:
 *
 * Hello
 * World
 *
 * then calling BackwardsPrinter::print() will write
 *
 * World
 * Hello
 *
 * to std::cout
 */
class BackwardsPrinter{
public:
	BackwardsPrinter(std::string fileName);
	void print(void);
	std::vector<std::string> getReversedContents();
private:
	std::string m_fileName;
};

#endif // INCLUDE_BACKWARDS_PRINTER_H
