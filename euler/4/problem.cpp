#include <iostream>
#include <math.h>
#include "../lib/eulerlib.h"

int main()
{
	int result = 0;

	for(long i = 999; i > 101; i--)
	{

	// && i*j > result optimalizalas, ha a jelenlegi szorzat kisebb,
	// mint a legnagyobb tarolt palindroma, akkor kisebb szammal
	// szorzva az aktualis i-t nem fogunk nagyobb szamot kapni

		for(long j = i - 1; j > 99 && i*j > result; j--)
		{
			if(eulerlib::isPalindrome(i * j))
			{
				result = i * j;
			}
		}
	}

	std::cout << result << std::endl;
	return 0;
}
