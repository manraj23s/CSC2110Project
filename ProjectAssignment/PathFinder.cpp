#include <iostream>
#include "PathFinder.h"
using namespace std;

void pathFinder::search()
{
	// A path from the initial position to the goal is found.
	// At the end, the path is displayed.
	// The path contains the cell positions to follow e.g. (1, 0) -> (1, 1) -> (2, 1) ->
	// (3, 1).
	// The path can be displayed from initial position to goal; or from goal to
	// initial position
	
	while (map->getCellType() != 2) 
	{
		if (map->getCellType() != 1) 
		{
			cout << map->getCellType() << endl;
			map++;
		}
		else if (map->getCellType() == 1)
		{
			map--;
			while (map->getCellType() != 2)
			{
				map += 6;
				cout << map->getCellType() << endl;
			}
			break;
		}
	}
	cout << currentPosition.getRow();
	cout << currentPosition.getColumn();
	//else
	//	cout << "Goal" << endl;


}

pathFinder::pathFinder(cell* pmap, int initialColumn, int initialRow) : currentPosition(initialColumn, initialRow) // CR or RC?
{
	// Argument: Pointer to bi dimensional array(pmap); initialColumn; initialRow.
	// Initialize map to pmap.
	// Initialize currentPosition to initialColumn and initialRow
	
	map = pmap;

}
