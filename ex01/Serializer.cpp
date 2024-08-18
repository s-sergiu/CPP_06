
#include "Serializer.hpp"

// Constructor class
// ------------------------------------------------------------------------

Serializer::Serializer(void) 
{
}

Serializer::Serializer(const Serializer &src)
{
	(void)src;
}

Serializer Serializer::operator = (const Serializer &src)
{
	(void)src;
	return *this;
}

Serializer::~Serializer(void)
{
}

// Class functions 
// ------------------------------------------------------------------------

uintptr_t serialize(Data *ptr) {

}

Data *deserialize(uintptr_t raw) {

}
