#include <iostream>
#include <math.h>
#include "../lib/eulerlib.h"

int main()
{
	long szam = 600851475143;
	long limit = sqrt(szam);

	for (long i = limit; i >= 3; i--)
	{
		if(szam%i == 0 && eulerlib::isPrime(i))
		{
			std::cout << i << std::endl;
			return 0;
		}
	}

	return 0;
}
