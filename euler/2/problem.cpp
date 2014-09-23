#include <iostream>

int main()
{
	int summ = 0;
	int elso = 1;
	int masodik = 2;

	while( masodik < 5000000)
	{
		if(masodik%2 == 0)
			summ += masodik;

		masodik += elso;
		elso = masodik - elso;
	}

	std::cout << summ << std::endl;
	return 0;
}
