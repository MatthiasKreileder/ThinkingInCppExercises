
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
class Text{
public:
	Text();
	Text(std::string s);
	std::string contents();
private:
	std::string m_contents;
};

Text::Text()
: m_contents("")
{}

Text::Text(std::string s)
: m_contents("")
{
	std::ifstream inputStream(s.c_str());
	if(!inputStream)
		throw std::runtime_error("Unable to open file");
		
	std::string line;
	while(getline(inputStream,line)){
		m_contents.append(line).append("\n");
	}
	// remove last newline character (probably not the most elegant solution ever :S )
	if(m_contents.size() > 0)
		m_contents = m_contents.substr(0, m_contents.size()-1);
}



std::string Text::contents()
{
	return m_contents;
}

int main ()
{
	std::string fileName = "text.txt";
	Text fileHandle(fileName.c_str());
	std::cout << "Contents of " << fileName << std::endl;
	std::cout << fileHandle.contents() << std::endl;
	return 0;
}
