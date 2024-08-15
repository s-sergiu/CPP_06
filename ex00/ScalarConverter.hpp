
#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <ctype.h>
#include <cstdlib>

class ScalarConverter {
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &);
		ScalarConverter operator = (const ScalarConverter &);
		~ScalarConverter(void);
		void toChar(double &);
		void toInt(double &);
		void toFloat(double &);
		void toDouble(double &);
	public:
		static void convert(std::string &);
};

#endif
