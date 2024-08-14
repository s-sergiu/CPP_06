
#include "ScalarConverter.hpp"

// Constructor class
// ------------------------------------------------------------------------

ScalarConverter::ScalarConverter(void) 
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

ScalarConverter ScalarConverter::operator = (const ScalarConverter &src)
{
	(void)src;
	return *this;
}

ScalarConverter::~ScalarConverter(void)
{
}

// Class functions 
// ------------------------------------------------------------------------

void ScalarConverter::convert(std::string &string)
{
	toChar(string);
	toInt(string);
	toFloat(string);
	toDouble(string);
}

void ScalarConverter::toChar(std::string &string)
{
	std::cout<<"char: "<<string.c_str()<<std::endl;
}

void ScalarConverter::toInt(std::string &string)
{
	std::cout<<"int: "<<string<<std::endl;
}

void ScalarConverter::toFloat(std::string &string)
{
	std::cout<<"float: "<<string<<std::endl;
}

void ScalarConverter::toDouble(std::string &string)
{
	std::cout<<"double: "<<string<<std::endl;
}
