#pragma once
#include <iostream>
using namespace std;

#include "position.h"

class pathfinder : public position
{
private:
	int* map; //pointer to a bi - dimensional array of cell objects.
	position currentPosition;
	void display();
public:
	void search()
	{
		// A path from the initial position to the goal is found.
		// At the end, the path is displayed.
		// The path contains the cell positions to follow e.g. (1, 0) -> (1, 1) -> (2, 1) ->
		// (3, 1).
		// The path can be displayed from initial position to goal; or from goal to
		// initial position


	}
	pathfinder(int* pmap, int initialColumn, int initialRow) : currentPosition(initialColumn, initialRow) // CR or RC?
	{
		// Argument: Pointer to bi dimensional array(pmap); initialColumn; initialRow.
		// Initialize map to pmap.
		// Initialize currentPosition to initialColumn and initialRow

		map = pmap;
	}
};
