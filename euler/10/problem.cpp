#include <iostream>
#include "../lib/eulerlib.h"

int main()
{
	long result = 0;
	for (long i = 1; i <= 2000000; i++)
	{
		if(eulerlib::isPrime(i))
		result += i;
	}
	std::cout << "Az eredmeny: " << result << std::endl;
	return 0;
}
