#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <stdlib.h>

std::vector<unsigned long> &split(const std::string &s, char delim, std::vector<unsigned long> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(atoi(item.c_str()));
    }
    return elems;
}

int main()
{
	std::ifstream infile("./p067_triangle.txt");
        std::string line;
        char delimiter = ' ';
        int rowNo = 0;
        int columnNo = 0;

	std::vector<unsigned long> currentRow;
	std::vector<unsigned long> summRow;
	std::vector<unsigned long> tempRow;

	infile.clear();
        infile.seekg(0);
        std::string hackTemp;   // becouse newlines are not spaces
        int newLinePosition = 0;
        while (std::getline(infile, line))
	{
		split(line, delimiter, currentRow);

		if(currentRow.size() == 1)
		{
			summRow.push_back(currentRow[0]);
		}
		else
		{
			tempRow.clear();
			for(int i = 0; i < summRow.size(); i++)
			{
				tempRow.push_back(summRow[i]);
			}

			for(int i = 0; i < currentRow.size(); i++)
			{
				if(i == 0)
				{
					summRow[0] += currentRow[0];
				}
				else if(i == currentRow.size() - 1)
				{
					summRow.push_back(currentRow[i] + tempRow[i - 1]);
				}
				else
				{
					unsigned long max = tempRow[i - 1] >= tempRow[i] ? tempRow[i - 1] : tempRow[i];
					summRow[i] = currentRow[i] + max;
				}	
			}
		}
		currentRow.clear();
	}

	unsigned long result = 0;
	for(int i = 0; i < summRow.size(); i++)
		if(summRow[i]  > result) result = summRow[i];

	std::cout << "Az eredmeny: " << result << std::endl;
	return 0;
}
