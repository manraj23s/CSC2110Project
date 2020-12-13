#include "pathFinder.h"
#include <string>
#include <algorithm>

void pathFinder::search()
{
	int r = currentPosition.getRow();
	int c = currentPosition.getColumn();
	vector<string> solution;
	// call the dfs algorithm
	dfs(&currentPosition, r, c, solution);
	// print the solution
	display(solution);
}

void pathFinder::display(vector<string> s)
{
	reverse(s.begin(), s.end());
	for (size_t i = 0; i < s.size(); i++)
	{
		cout << s[i];
		if (i < s.size() - 1)
			cout << "->";
	}
}

bool pathFinder::dfs(position *p, int r, int c,  vector<string>& v)
{
	const int rowSize = 5;
	const int columnSize = 6;

	cell* currentCell = map + (r * columnSize + c);
	cell* cellRight = map + (r * columnSize + c+1);
	cell* cellLeft= map + (r * columnSize + c-1);
	cell* cellTop = map + ((r-1) * columnSize + c);
	cell* cellBottom = map + ((r+1) * columnSize + c);
	
	string s = "(" + to_string(r) + ',' + to_string(c) + ")";

	// check if this state if the goal (solution)
	if (currentCell->getCellType() == 2)
	{
		v.push_back(s);
		return true;
	}

	// mark this state as visited
	currentCell->setCellType(3);

	// perform actions *when possible*
	int cellTypeRight = cellRight->getCellType();
	int cellTypeLeft = cellLeft->getCellType();
	int cellTypeTop = cellTop->getCellType();
	int cellTypeBottom = cellBottom->getCellType();

	if (c < 5 && cellTypeRight != 1 && cellTypeRight != 3 && dfs(p, r, c+1, v)) { // move right
		v.push_back(s);
		return true;
	}
	else if (c > 0 && cellTypeLeft != 1 && cellTypeLeft != 3 && dfs(p, r, c-1, v)) { // move left
		v.push_back(s);
		return true;
	}
	else if (r > 0 && cellTypeTop != 1 && cellTypeTop != 3 && dfs(p, r - 1, c, v)) { // move up
		v.push_back(s);
		return true;
	}
	else if (r < 4 && cellTypeBottom != 1 && cellTypeBottom != 3 && dfs(p, r + 1, c, v)) { // move down
		v.push_back(s);
		return true;
	}

	return false; // if the goal is not found using that path
}

pathFinder::pathFinder(cell* pmap, int initialRow, int initialColumn)
{	
	map = pmap;
	currentPosition.setColumn(initialColumn);
	currentPosition.setRow(initialRow);
}
