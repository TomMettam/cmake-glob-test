#include <iostream>

#include "src/two.h"
#include "lib/src/anotherTwo.h"

int main()
{
	auto ptr = std::make_unique<two>();
	ptr->print();

	auto ptr2 = std::make_unique<anotherTwo>();
	ptr2->print();
	return 0;
}
