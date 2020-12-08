// Project assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cell.h"
#include "pathFinder.h"
#include "position.h"

int main()
{
    //cell object new bi-dimensional array
    cell fullMap[5][6] = { 
        {cell(1),cell(1),cell(1),cell(0),cell(1),cell(1)}, 
        {cell(1),cell(0),cell(0),cell(0),cell(0),cell(0)},
        {cell(0),cell(0),cell(1),cell(0),cell(1),cell(0)},
        {cell(0),cell(1),cell(1),cell(0),cell(1),cell(2)},
        {cell(1),cell(1),cell(1),cell(1),cell(1),cell(1)} };

    pathFinder pF(&fullMap[0][0], 1, 4); // fix this 
    pF.search();
}
