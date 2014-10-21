#include "eulerlib.h"
#include <string>
#include <sstream>      // std::istringstream

namespace eulerlib
{
	bool isPrime(long num)
	{
		if(num == 1)
			return false;

		for(long i = 2; i <= sqrt(num); i++)
			if(num%i == 0)
				return false;

		return true;
	}	

	bool isPalindrome(long num)
	{

		int length = numberOfDigits(num);

		if(length == 1)
			return true;

		int upperDigit = 0;
		int lowerDigit = 0;

		if(length % 2)
		{
			lowerDigit = length / 2;
			upperDigit = lowerDigit + 2;
		}
		else
		{
			upperDigit = length / 2 + 1;
                        lowerDigit = length / 2;
		}

		while(lowerDigit > 0)
		{
			if(getDigitFromPosition(num, upperDigit) != getDigitFromPosition(num, lowerDigit))
				return false;

			lowerDigit--;
			upperDigit++;
		}
		

		return true;
	}

	int getDigitFromPosition(long num, int pos)
	{
		int tenPower = 1;

		for(int i = 0; i < pos - 1; i++)
			tenPower *= 10;

		num /= tenPower;

		return num % 10;		
	}

        int numberOfDigits(long num)
	{
		int result = 0;

		while(num != 0)
		{
			num /= 10;
			result++;
		}
		return result;
	}

	int stringToInt(std::string& string)
	{
		int numb;
		std::istringstream(string) >> numb;
		return numb;
	}

	void getDivisors(int num, divisorMap &returnMap)
	{
		if(isPrime(num))
			returnMap[num] = 1;

		int counter;

		for(int i = 2; i <= sqrt(num) + 1; i++)
		{
			if(num%i == 0)
			{
				counter = 0;
				while(num%i == 0)
				{
					counter++;
					num = num / i;
				}

				returnMap[i] = counter;
	
				if(isPrime(num))
					returnMap[num] = 1;
			}
		}
		return;
	}

	int getNumOfDivisors(int num)
	{
		divisorMap divisors;
		int numOfDivisors = 1;

		getDivisors(num, divisors);

		for (std::map<int,int>::iterator it=divisors.begin(); it!=divisors.end(); ++it)
                {
                        numOfDivisors = numOfDivisors * (it->second + 1);

                }

		return numOfDivisors;
	
	}
}
