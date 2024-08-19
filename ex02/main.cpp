
#include "Base.hpp"

Base *generate(void) {
	A *obj = new A;
	return (reinterpret_cast<Base*>(obj));
}

int main(void) {

	Base *test;
	test = generate();
	return(0);
}
