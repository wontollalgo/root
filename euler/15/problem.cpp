#include <iostream>
#include <map>
#include <sstream>

unsigned long getNumberOfPaths(int x, int y, std::map<std::string, unsigned long> *resultMap)
{
	if((x == 1 && y == 0) || (x ==0 && y ==1))
		return 1;

	std::stringstream ss;
	std::string key = "";

	ss << x;
	key = key + ss.str() +"x";
	ss.str("");
	ss << y;
	key += ss.str();
	if((*resultMap).find(key) != (*resultMap).end())
		return (*resultMap)[key];

	ss.str("");
	ss << x;
	key = ss.str() +"x";
	ss.str("");
	ss << y;
	key += ss.str();

	if((*resultMap).find(key) != (*resultMap).end())
	{
		return (*resultMap)[key];
	}

	key = "";
	unsigned long result = 0;
	unsigned long localResult;

	for(int i = x - 1; i >= 0; i--)
		for(int j = y - 1; j >= 0; j--)
		{
			localResult = getNumberOfPaths(i,j,resultMap);

			ss.str("");
			ss << i;
			key = key + ss.str() +"x";
			ss.str("");
			ss << j;
			key += ss.str();
			(*resultMap)[key] = localResult;

			ss.str("");
			ss << j;
			key = ss.str() +"x";
			ss.str("");
			ss << i;
			key += ss.str();
			(*resultMap)[key] = localResult;
			key = "";

			result += localResult;
		}
	return result;
}
int main()
{
	std::map<std::string,unsigned long> *resultMap = new std::map<std::string, unsigned long>;
	std::cout << "The result: " << getNumberOfPaths(21,21,resultMap) <<std::endl;
	return 0;
}
