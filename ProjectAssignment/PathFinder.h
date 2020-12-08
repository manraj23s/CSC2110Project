#pragma once
#include <iostream>
#include "position.h"
#include "cell.h"
#include <vector>
using namespace std;

class pathFinder : public position
{
private:
	cell* map;
	position currentPosition;
	// void display();
public:
	void search();
	bool dfs(position *p, int, int, vector<string>& v);
	pathFinder(cell* pmap, int initialRow, int initialColumn); 
};
