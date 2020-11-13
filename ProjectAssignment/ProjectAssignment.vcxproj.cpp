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
     
    int** ptr = new int*;  //first allocate array of row pointers
    for (int i = 0; i < 5; ++i)
    {
        ptr[i] = new int[6]; // allocate memory for columns in each row
    }


    pathFinder obj(*ptr, 1, 0);
    
    obj.setRow(1);
    obj.setColumn(0);
    cout << obj.getRow();
    cout << obj.getColumn();
}
// Links we should all visit: post here
// https://www.tutorialspoint.com/cplusplus/cpp_pointer_to_pointer.htm
// http://www.cplusplus.com/forum/beginner/64451/
