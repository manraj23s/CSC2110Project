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
	void search();
	pathfinder(int* pmap, int initialColumn, int initialRow); // CR or RC?
};
