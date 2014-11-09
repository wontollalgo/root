#include <iostream>

int main()
{
	int chainSize = 0;
	unsigned long result = 0;

	for(int i = 1 ; i < 1000000; i++)
	{
		unsigned long  theNumber = i;
		int localChainSize = 0;

		while(theNumber != 1)
		{
			if(theNumber % 2 == 0)
				theNumber = theNumber / 2;
			else
				theNumber = 3 * theNumber + 1;

		if(theNumber <= 0)
			return 0;

			localChainSize++;
		}


		if(localChainSize > chainSize)
		{
			chainSize = localChainSize;
			result = i;
		}
	}
	std::cout << "Az eredmeny: " << result << std::endl;
	return 0;
}
