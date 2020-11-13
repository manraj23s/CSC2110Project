//=====================================================================================
//
// Assignment: Project Assignment
// Team: 03
// Names: Manraj Singh, Ashvin Adapa, Shuraya Choudhury, Azharul Tambir, Ridhima Phatak
//
//=====================================================================================

#include <iostream>
#include "Cell.h"
#include "PathFinder.h"
#include "Position.h"
using namespace std;

int main()
{
     //cell object new bi-dimensional array
    cell bArray[5][6] = { 
        {cell(1),cell(1),cell(1),cell(1),cell(1),cell(1)}, 
        {cell(0),cell(0),cell(0),cell(0),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(2),cell(1)} };

    bArray[2][3].setCellType(1);

    for (int row = 0; row < 5; row++) 
    {
        for (int col = 0; col < 6; col++) 
        {
            cout << bArray[row][col].getCellType() << " ";
        }
        cout << endl;
    }
}

