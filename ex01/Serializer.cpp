
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

uintptr_t Serializer::serialize(Data *ptr) {

	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* Serializer::deserialize(uintptr_t raw) {

	Data *ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}
