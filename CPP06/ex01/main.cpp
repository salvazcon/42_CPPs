#include "Serializer.hpp"

int main() 
{
	Data* a = new Data(20);
	uintptr_t u = Serializer::serialize(a);
	std::cout << "- Serialized number: "<< u << std::endl;
	Data* b = Serializer::deserialize(u);
	std::cout << "- Deserialized number: " << b->getN() << std::endl;

	std::cout << std::endl;
	std::cout << "We change the main object number: " << std::endl;
	a->setN(10);
	std::cout << "b: " << b->getN() << std::endl;
	std::cout << "a: " << a->getN() << std::endl;
	delete a;
}