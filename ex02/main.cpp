
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void identify(Base& p) {
	A *derived_a;
	B *derived_b;
	C *derived_c;
	derived_a = dynamic_cast<A*>(&p);
	if (derived_a)
		std::cout<<"belongs to A"<<std::endl;
	derived_b = dynamic_cast<B*>(&p);
	if (derived_b)
		std::cout<<"belongs to B"<<std::endl;
	derived_c = dynamic_cast<C*>(&p);
	if (derived_c)
		std::cout<<"belongs to C"<<std::endl;
}

void identify(Base* p) {
	A *derived_a;
	B *derived_b;
	C *derived_c;
	derived_a = dynamic_cast<A*>(p);
	if (derived_a)
		std::cout<<"belongs to A"<<std::endl;
	derived_b = dynamic_cast<B*>(p);
	if (derived_b)
		std::cout<<"belongs to B"<<std::endl;
	derived_c = dynamic_cast<C*>(p);
	if (derived_c)
		std::cout<<"belongs to C"<<std::endl;
}

Base *generate(void) {
	srand(time(NULL));
	int num = (rand() % 3) + 1;
	std::cout<<num<<std::endl;
	if (num == 1) {
		A *obj = new A;
		return (dynamic_cast<Base*>(obj));
	} else if (num == 2) {
		B *obj = new B;
		return (dynamic_cast<Base*>(obj));
	} else {
		C *obj = new C;
		return (dynamic_cast<Base*>(obj));
	}
}

int main(void) {

	Base *base;
	base = generate();
	identify(base);
	identify(*base);

	return(0);
}
