#include <iostream>
#include <string>

int main()
{
	std::string egyesek[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	std::string tiz[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	std::string tizesek[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	std::string theChain = "";

	for(int i = 0; i <= 9; i++)
		theChain = theChain + egyesek[i];// + "\n";

	for(int i = 0; i <= 9; i++)
		theChain = theChain + tiz[i];// + "\n";


	for(int i = 20; i <= 999;  i++)
	{
		int temp = i;
		std::string hundred;

		hundred = egyesek[temp / 100] + "hundred";

		if(temp % 100 == 0)
		{
			theChain = theChain + hundred;// + "\n";
		}

		temp = temp % 100;

		if(temp == 11)
		{
			for(int i = 0; i <= 9; i++)
				theChain = theChain + hundred + "and" + tiz[i];// + "\n";

			i += 8;
		}
		else if(temp != 10 && i % 100 != 0)
		{
			if(i > 100)
				theChain = theChain + hundred + "and";
			theChain = theChain + tizesek[temp / 10] + egyesek[temp % 10];// + "\n";
		}
	}

	theChain += "onethousand";

	std::cout << "Az eredmeny: " << theChain.length() << std::endl;
	return 0;
}
