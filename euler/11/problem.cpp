#include <iostream>
#include "../lib/eulerlib.h"
#include "../lib/NxMNumericMatrix.h"
#pragma GCC diagnostic ignored "-Wwrite-strings"

int main()
{
        NxMNumericMatrix* nxm= new NxMNumericMatrix("./data.txt");
        int maxProduct = 0;
        int current = 1;
        // vertical
        for(int i = 0; i < nxm->getColumnNumber(); i++)
        {
                for(int j = 0; j < nxm->getRowNumber() - 4; j++)
                {
                        current *= nxm->getElement(i, j);
                        current *= nxm->getElement(i, j + 1);
                        current *= nxm->getElement(i, j + 2);
                        current *= nxm->getElement(i, j + 3);
                        if(current > maxProduct)
                                maxProduct = current;
                        current = 1;
                }
        } 

        for(int i = 0; i < nxm->getColumnNumber() - 4; i++)
        {
                for(int j = 0; j < nxm->getRowNumber() - 4; j++)
                {
                        current *= nxm->getElement(i, j);
                        current *= nxm->getElement(i + 1, j + 1);
                        current *= nxm->getElement(i + 1, j + 2);
                        current *= nxm->getElement(i + 1, j + 3);
                        if(current > maxProduct)
                                maxProduct = current;
                        current = 1;
                }
        }

        for(int i = 3; i < nxm->getColumnNumber(); i++)
        {
                for(int j = 3; j < nxm->getRowNumber() - 4; j++)
                {
                        current *= nxm->getElement(i, j);
                        current *= nxm->getElement(i - 1, j + 1);
                        current *= nxm->getElement(i - 2, j + 2);
                        current *= nxm->getElement(i - 3, j + 3);
                        if(current > maxProduct)
                                maxProduct = current;
                        current = 1;
                }
        }
        std::cout << "Az eredmeny: " << maxProduct << std::endl;
        return 0;
}
