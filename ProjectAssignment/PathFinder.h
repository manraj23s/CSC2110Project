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
	void display(vector<string>);
public:
	void search();
	bool dfs(position*, int, int, vector<string>&);
	pathFinder(cell*, int, int); 
};
