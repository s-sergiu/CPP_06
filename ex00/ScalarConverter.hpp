
#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter operator = (const ScalarConverter &src);
		~ScalarConverter(void);
		static void toChar(std::string &);
		static void toInt(std::string &);
		static void toFloat(std::string &);
		static void toDouble(std::string &);
	public:
		static void convert(std::string &);
};

#endif
