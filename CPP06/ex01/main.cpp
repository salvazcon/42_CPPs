#include "Serializer.hpp"


int main() {
	Data* a = new Data();
	std::cout << a->getN() << std::endl;

	uintptr_t u = Serializer::serialize(a);
	Data* b = Serializer::deserialize(u);
	std::cout << b->getN() << std::endl;

	a->setN(10);
	std::cout << b->getN() << std::endl;
	std::cout << a->getN() << std::endl;
	delete a;
}