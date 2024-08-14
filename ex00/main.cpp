
#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	std::string arg(argv[1]);
	if (argc == 2) {
		try {	
			ScalarConverter::convert(arg);
		} catch (std::exception &e) {
			std::cout<<"Exception: "<<e.what()<<std::endl;
		}
	}
	return (0);
}
