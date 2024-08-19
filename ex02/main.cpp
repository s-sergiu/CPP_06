
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base& p) {
	Base *obj;
	obj = dynamic_cast<A*>(&p);
	if (obj)
		std::cout<<"Class belongs to A!"<<std::endl;
	obj = dynamic_cast<B*>(&p);
	if (obj)
		std::cout<<"Class belongs to B!"<<std::endl;
	obj = dynamic_cast<C*>(&p);
	if (obj)
		std::cout<<"Class belongs to C!"<<std::endl;
}

void identify(Base* p) {
	Base *obj;
	obj = dynamic_cast<A*>(p);
	if (obj)
		std::cout<<"Class belongs to A!"<<std::endl;
	obj = dynamic_cast<B*>(p);
	if (obj)
		std::cout<<"Class belongs to B!"<<std::endl;
	obj = dynamic_cast<C*>(p);
	if (obj)
		std::cout<<"Class belongs to C!"<<std::endl;
}

Base *generate(void) {
	srand(time(NULL));
	int num = (rand() % 3) + 1;

	std::cout<<"Generating derived class.."<<std::endl;
	if (num == 1) {
		std::cout<<"Generated derived class A"<<std::endl;
		return (dynamic_cast<Base*>(new A));
	} else if (num == 2) {
		std::cout<<"Generated derived class B"<<std::endl;
		return (dynamic_cast<Base*>(new B));
	} else {
		std::cout<<"Generated derived class C"<<std::endl;
		return (dynamic_cast<Base*>(new C));
	}
}

int main(void) {

	Base *base;
	std::cout<<"Trying to generate a derived class ";
	std::cout<<"and assign it to a Base pointer...!"<<std::endl;
	base = generate();
	std::cout<<"Trying to identify base on pointer...!"<<std::endl;
	identify(base);
	std::cout<<"Trying to identify base on reference...!"<<std::endl;
	identify(*base);

	delete(base);
	return(0);
}
