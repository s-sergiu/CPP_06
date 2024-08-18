
#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <ctype.h>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <limits>

class ScalarConverter {
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &);
		ScalarConverter operator = (const ScalarConverter &);
		~ScalarConverter(void);
		bool strToNum(std::string &, double *);
		void toChar(std::string &);
		void toInt(std::string &);
		void toFloat(std::string &);
		void toDouble(std::string &);
	public:
		static void convert(std::string &);
};

#endif
