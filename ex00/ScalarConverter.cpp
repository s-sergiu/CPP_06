
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

bool ScalarConverter::strToNum(std::string &arg, double *digit)
{
	char *test = NULL;
	*digit = std::strtod(arg.c_str(), &test);
	if (test[0] && test[0] != 'f')
		return false;
	return true;
}

void ScalarConverter::convert(std::string &arg)
{
	ScalarConverter obj;
	std::cout<<std::setprecision(1)<<std::fixed;
	obj.toChar(arg);
	obj.toInt(arg);
	obj.toFloat(arg);
	obj.toDouble(arg);
}

void ScalarConverter::toChar(std::string &arg)
{
	double digit;
	if (!strToNum(arg,&digit))
		std::cout<<"char: "<<"impossible"<<std::endl;
	else if (isascii(digit) && isprint(digit)) {
		char c = static_cast<char>(digit);
		std::cout<<"char: "<<c<<std::endl;
	} else
		std::cout<<"char: "<<"Non displayable"<<std::endl;
}

void ScalarConverter::toInt(std::string &arg)
{
	double digit;
	if (!strToNum(arg,&digit))
		std::cout<<"int: "<<"impossible"<<std::endl;
	else if (isnan(digit))
		std::cout<<"int: "<<digit<<std::endl;
	else if (digit > std::numeric_limits<int>::max() 
		|| digit < std::numeric_limits<int>::min())
		std::cout<<"int: "<<"impossible"<<std::endl;
	else
		std::cout<<"int: "<<static_cast<int>(digit)<<std::endl;
}

void ScalarConverter::toFloat(std::string &arg)
{
	double digit;
	bool flag = strToNum(arg,&digit);
	float f = static_cast<float>(digit);
	if (!flag)
		std::cout<<"float: "<<"impossible"<<std::endl;
	else if (f == std::numeric_limits<float>::max() 
		|| f == std::numeric_limits<float>::min())
		std::cout<<"float: "<<"impossible"<<std::endl;
	else if (digit == std::numeric_limits<float>::infinity())
		std::cout<<"float: +"<<f<<"f"<<std::endl;
	else
		std::cout<<"float: "<<f<<"f"<<std::endl;
}

void ScalarConverter::toDouble(std::string &arg)
{
	double digit;
	if (!strToNum(arg,&digit))
		std::cout<<"double: "<<"impossible"<<std::endl;
	else if (digit == std::numeric_limits<double>::max() 
		|| digit == std::numeric_limits<double>::min())
		std::cout<<"double: "<<"impossible"<<std::endl;
	else if (digit == std::numeric_limits<double>::infinity())
		std::cout<<"double: +"<<digit<<std::endl;
	else
		std::cout<<"double: "<<digit<<std::endl;
}
