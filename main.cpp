#include <iostream>

#include "src/two.h"

int main()
{
	auto ptr = std::make_unique<two>();
	ptr->print();
	return 0;
}
