#include <iostream>

#include "src/one.h"
#include "lib/src/anotherOne.h"

int main()
{
	auto ptr = std::make_unique<one>();
	ptr->print();

	auto ptr2 = std::make_unique<anotherOne>();
	ptr2->print();
	return 0;
}
