#include <iostream>
#include "cell.h"
#include "pathFinder.h"
#include "position.h"
using namespace std;

void cell::setCellType(int acellType)
{
    cellType = acellType;
}
int cell::getCellType()
{
    return cellType;
}
cell::cell()
{

}