
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

void ScalarConverter::convert(std::string &arg)
{
	double digit = std::strtod(arg.c_str(), NULL);
	ScalarConverter test1;
	test1.toChar(digit);
	test1.toInt(digit);
	test1.toFloat(digit);
	test1.toDouble(digit);
}

void ScalarConverter::toChar(double &arg)
{
	char d = static_cast<char>(arg);
	if (isascii(d) && isprint(d))
		std::cout<<"char: "<<d<<std::endl;
	else if (arg.length() > 1)
		std::cout<<"char: "<<"impossible"<<std::endl;
	else
		std::cout<<"char: "<<"Non displayable"<<std::endl;
}

void ScalarConverter::toInt(double &arg)
{
	std::cout<<"int: "<<arg<<std::endl;
}

void ScalarConverter::toFloat(double &arg)
{
	std::cout<<"float: "<<arg<<std::endl;
}

void ScalarConverter::toDouble(double &arg)
{
	std::cout<<"double: "<<arg<<std::endl;
}
