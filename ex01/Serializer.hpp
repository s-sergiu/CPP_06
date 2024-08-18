
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Serializer {
	private:
		Serializer(void);
		Serializer(const Serializer &);
		Serializer operator = (const Serializer &);
		~Serializer(void);
	public:
		uintptr_t serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);
};

#endif
