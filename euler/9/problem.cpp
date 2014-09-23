#include <iostream>
#include "../lib/eulerlib.h"

int main()
{
	for(int c = 499; c >= 335; c--)
	{
		int b = c - 1;
		int a = 1000 - (b + c);
		while(a < b)
		{
			if((c * c) == ((b * b) + (a * a)) )
			{
				std::cout << "Az eredmeny: " << a * b * c <<  std::endl;
				return 0;
			}
			b--;
			a = 1000 - (b + c);
		}
	}
	return 0;
}
