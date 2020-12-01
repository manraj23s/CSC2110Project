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
     {
	int array[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}};

	int* ptrBA;
	ptrBA = &array[1][0];
	//n*columnsize+m
	cout << *ptrBA << endl;
	cout << *(ptrBA + 3) << endl;
	cout << *(ptrBA - 3) << endl; //probably for printing 1




	cout << endl << endl << endl;
    //cell object new bi-dimensional array
    cell bArray[5][6] = { 
        {cell(1),cell(1),cell(1),cell(1),cell(1),cell(1)}, 
        {cell(0),cell(0),cell(0),cell(0),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(2),cell(1)} };

    bArray[2][3].setCellType(1);

    for (int row = 0; row < 5; row++) 
    {
        for (int col = 0; col < 6; col++) 
        {
            cout << bArray[row][col].getCellType() << " ";
        }
        cout << endl;
    }

    cell* ptr;
    ptr = &bArray[1][0];
    //cout << ptr->getCellType() << endl;

    pathFinder pf1(ptr, 1, 0);
    pf1.search();
          
}
// Links we should all visit: post here
// https://www.tutorialspoint.com/cplusplus/cpp_pointer_to_pointer.htm
// http://www.cplusplus.com/forum/beginner/64451/

//START OF PROF DFS EXAMPLE CODE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/*
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void Application1();
bool dfs1(int i, int t, int currentDepth, int maxDepth, vector<string>& p);
void Application2();
bool dfs2(int i, int a[], int arrayLimit, int currentDepth, int maxDepth, vector<string>& p);
bool dfs2(int i, int a[], int arrayLimit, vector<string>& p);

int main()
{
    cout << "Solution search!\n";
    Application2();
}

void Application1() {
    int initial;
    int target;

    cout << "Enter the initial value: ";
    cin >> initial;

    cout << "Enter the target value: ";
    cin >> target;

    vector<string> path;
    dfs1(initial, target, 0, 2, path);
    cout << "Solution\n";
    for (int i = path.size() - 1; i >= 0; i--) cout << path.at(i);
}

bool dfs1(int i, int t, int currentDepth, int maxDepth, vector<string>& p) {
    if (i == t) {
        return true;
    }

    if (currentDepth < maxDepth) {
        if (dfs1(i * 2, t, currentDepth + 1, maxDepth, p)) { //i*=2 action
            cout << "i*=2\n";
            p.push_back("i*=2\n");
            return true;
        }

        else if (dfs1(i + 1, t, currentDepth + 1, maxDepth, p)) { //i++ action
            cout << "i++\n";
            p.push_back("i++\n");
            return true;
        }

        else if (dfs1(i * i, t, currentDepth + 1, maxDepth, p)) { //i= i^2 action
            cout << "i=i^2\n";
            p.push_back("i=i^2\n");
            return true;
        }
    }
    return false;
}

void Application2() {
    int i;
    const int size = 10;
    int array[size] = { 0 };

    srand(time(0));
    cout << "Enter the initial position [0...9]: ";
    cin >> i;
    array[rand() % 10] = 1; //define position w value 1

    //display array
    for (int j = 0; j < size; j++) cout << " " << array[j];
    cout << endl;
    for (int j = 0; j < 1; j++) cout << "  ";
    cout << "i\n";

    vector<string> path;
    //dfs2(i, array, 9, path)
    dfs2(i, array, 9, 0, 9, path);
    cout << "Solution\n";
    for (int i = path.size() - 1; i >= 0; i--) cout << path.at(i);
}

bool dfs2(int i, int a[], int arrayLimit, int currentDepth, int maxDepth, vector<string>& p) {
    if (a[i] == i) { //stop condition
        return true;
    }

    if (currentDepth < maxDepth) {
        if (i > 0 && dfs2(i - 1, a, arrayLimit, currentDepth + 1, maxDepth, p)) { //move to the left
            cout << "<-\n";
            p.push_back("<-\n");
            return true;
        }

        else if (i < arrayLimit - 1 && dfs2(i + 1, a, arrayLimit, currentDepth + 1, maxDepth, p)) {//move right
            cout << "->\n";
            p.push_back("->\n");
            return true;
        }
    }
    return false;
}

bool dfs2(int i, int a[], int arrayLimit, vector<string>& p) {
    if (a[i] == 1) { //stop condition
        return true;
    }

    a[i] = -1;

    if (i > 0 && a[i - 1] != -1 && dfs2(i - 1, a, arrayLimit, p)) {//move left
        cout << "<-\n";
        p.push_back("<-\n");
        return true;
    }

    else if (i < arrayLimit - 1 && a[i - 1] != -1 && dfs2(i - 1, a, arrayLimit, p)) {//move right
        cout << "->\n";
        p.push_back("->\n");
        return true;
    }
    return false;
}
*/
