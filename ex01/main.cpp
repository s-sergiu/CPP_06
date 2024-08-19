
#include "Serializer.hpp"
#include <stdio.h>

int main(void) {
	
	Data struct_data;
	Data deserialized_data;

	struct_data.n = 24;
	uintptr_t ptr;

	ptr = Serializer::serialize(&struct_data);
	std::cout<<"normal struct: "<<struct_data.n<<std::endl;
	std::cout<<"deserialized before: "<<deserialized_data.n<<std::endl;
	std::cout<<"ptr: "<<ptr<<std::endl;
	deserialized_data = *Serializer::deserialize(ptr);
	std::cout<<"deserialized: "<<deserialized_data.n<<std::endl;
	//struct_data = Serializer::deserialize(ptr);

	return (0);
}
