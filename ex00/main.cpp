
#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		std::string arg = argv[1];
		try {	
			ScalarConverter::convert(arg);
		} catch (std::exception &e) {
			std::cout<<"Exception: "<<e.what()<<std::endl;
		}
	}
	else 
		std::cerr<<"Usage: ./convert <arg>"<<std::endl;
	return (0);
}
