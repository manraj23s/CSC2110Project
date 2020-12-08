#include "pathFinder.h"
#include "position.h"
#include <string>
#include <algorithm>

void pathFinder::search()
{
	// call the dfs algorithm
	vector<string> solution;
	int r = 2;									// fix this. hard coded
	int c = 0;
	dfs(&currentPosition, r, c, solution);
	
	// print the solution
	reverse(solution.begin(), solution.end());
	for (size_t i = 0; i < solution.size(); i++)
	{
		cout << solution[i];
		if (i < solution.size()-1)
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
	
	// check if this state if the goal (solution)
	if (currentCell->getCellType() == 2) // is this the goal?
	{
		string s = "(" + to_string(r) + ',' + to_string(c) + ")";
		v.push_back(s);
		return true;
	}

	// mark this state as visited
	currentCell->setCellType(3);

	int test = currentCell->getCellType();

	// perform actions *when possible*
	int cellTypeRight = cellRight->getCellType(); // look over this
	int cellTypeLeft = cellLeft->getCellType();
	int cellTypeTop = cellTop->getCellType();
	int cellTypeBottom = cellBottom->getCellType();

	if (c < 5 && cellTypeRight != 1 && cellTypeRight != 3 && dfs(p, r, c+1, v)) { // move right
		string s = "(" + to_string(r) + ',' + to_string(c) + ")";
		v.push_back(s);
		return true;
	}
	else if (c > 0 && cellTypeLeft != 1 && cellTypeLeft != 3 && dfs(p, r, c-1, v)) { // move left
		string s = "(" + to_string(r) + ',' + to_string(c) + ")";
		v.push_back(s);
		return true;
	}
	else if (r > 0 && cellTypeTop != 1 && cellTypeTop != 3 && dfs(p, r - 1, c, v)) { // move up
		string s = "(" + to_string(r) + ',' + to_string(c) + ")";
		v.push_back(s);
		return true;
	}
	else if (r < 4 && cellTypeBottom != 1 && cellTypeBottom != 3 && dfs(p, r + 1, c, v)) { // move down
		string s = "(" + to_string(r) + ',' + to_string(c) + ")";
		v.push_back(s);
		return true;
	}

	return false; // if the goal is not found using that path
}

pathFinder::pathFinder(cell* pmap, int initialRow, int initialColumn) // CR or RC?
{	
	map = pmap;
	currentPosition.setColumn(initialColumn);
	currentPosition.setRow(initialRow);
}
