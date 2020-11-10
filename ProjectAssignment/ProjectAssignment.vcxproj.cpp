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
    cell bArray[5][6] = { {1,1,1,1,1,1}, {0,0,0,0,0,0}, {1,1,1,1,0,1}, {1,1,1,1,0,1}, {1,1,1,1,2,1} };

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 6; col++) {
            cout << row << col << " ";        
        }
        cout << endl;
    }
}

