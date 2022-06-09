#include <iostream>

#include "src/one.h"

int main()
{
	auto ptr = std::make_unique<one>();
	ptr->print();
	return 0;
}
