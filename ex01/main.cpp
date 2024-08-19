
#include "Serializer.hpp"
#include <stdio.h>

int main(void) {
	
	Data test;
	Data *test1 = NULL;

	test.n = 2;
	uintptr_t bla = 4;

	printf("test1 address %p\n", &test);
	printf("test1 address %p\n", &bla);
	std::cout<<"before bla: "<<bla<<std::endl;
	std::cout<<"before tets.n: "<<test.n<<std::endl;
	bla = Serializer::serialize(&test);
	test1 = Serializer::deserialize(bla);
	printf("after address %p\n", &bla);
	std::cout<<"after bla: "<<bla<<std::endl;
	std::cout<<"after test.n: "<<test.n<<std::endl;

	std::cout<<"test1: "<<test1->n<<std::endl;
	return (0);
}
