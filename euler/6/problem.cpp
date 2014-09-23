#include <iostream>

int main()
{
	int negyzetekOsszege = 0;
	int osszegNegyzete = 0;

	for(int i = 0; i <= 100; i++)
	{
		negyzetekOsszege += i * i;
		osszegNegyzete += i;
	}

	osszegNegyzete *= osszegNegyzete;

	std::cout << osszegNegyzete - negyzetekOsszege << std::endl;
	return 0;
}
