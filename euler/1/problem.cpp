#include <iostream>

int main()
{
	int summ = 0;
	for(int i = 3; i < 1000; i += 3)
		summ += i;

	for(int i = 5; i < 1000; i += 5)
		summ += i;


	for(int i = 15; i < 1000; i += 15)
		summ -= i;

	std::cout << summ << std::endl;

	return 0;
}
