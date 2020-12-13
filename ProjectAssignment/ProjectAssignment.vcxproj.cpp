// TEAM 3
// AZHARUL TAMBIR
// RIDHIMA PHATAK
// MANRAJ SINGH
// SHURAYA CHOUDHURY
// ASHVIN ADAPA

#include "pathFinder.h"

int main()
{
    // bi-dimensional array of cell objects
    cell fullMap[5][6] = { 
        {cell(0),cell(0),cell(0),cell(0),cell(0),cell(0)}, 
        {cell(0),cell(0),cell(1),cell(0),cell(1),cell(1)},
        {cell(0),cell(1),cell(0),cell(0),cell(0),cell(1)},
        {cell(1),cell(0),cell(0),cell(0),cell(0),cell(1)},
        {cell(1),cell(0),cell(2),cell(1),cell(0),cell(1)} };

    cell* ptr = &fullMap[0][0]; 
    pathFinder pF(ptr, 4, 4); // Enter the initial position (row then column) here.
    pF.search();
}
