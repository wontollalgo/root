#ifndef EULERLIB_H
#define EULERLIB_H

#include <cmath>
#include<map>
#include <iostream>

namespace eulerlib
{
	bool isPrime(long num);
	bool isPalindrome(long num);
	int numberOfDigits(long num);
	int getDigitFromPosition(long num, int pos);
	int stringToInt(std::string& string);

	// first int is the diviasor the second
	// is which power the divisor is.
	// I hope it's clear... :)
	typedef std::map<int,int> divisorMap;
	void getDivisors(int num, divisorMap &returnMap); 
	int getNumOfDivisors(int num);
}

#endif
