#include <iostream>
#include <math.h>
#include "../lib/eulerlib.h"

int main()
{
	int result = 3;
	int counter = 1;

	while(counter != 10001)
	{
		if(eulerlib::isPrime(result))
			counter++;
		result++;
	}

	std::cout << result - 1 << std::endl;
	return 0;
}
