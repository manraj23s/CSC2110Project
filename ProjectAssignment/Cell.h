#pragma once
#include <iostream>
using namespace std;

class cell 
{
private:
    int cellType;
public:
    void setCellType(int acellType) 
    {
        cellType = acellType;
    }
    int getCellType() 
    {
        return cellType;
    }
    cell()
    {

    }
};
