#pragma once
#include <iostream>
using namespace std;

#include "position.h"

class pathFinder : public position
{
private:
	int* map; //pointer to a bi - dimensional array of cell objects.
	position currentPosition;
	void display();
public:
	void search();
	pathFinder(int* pmap, int initialColumn, int initialRow); // CR or RC?
};
