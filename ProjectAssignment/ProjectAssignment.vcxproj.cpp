// Project assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cell.h"
#include "pathFinder.h"
#include "position.h"
#include <vector>
using namespace std;

//void Application2();
//bool dfs2(int i, int a[], int arrayLimit, int currentDepth, int maxDepth, vector<string>& p);
bool dfs2(int i, cell* ptr, int arrayLimit, vector<string>& p);

int main()
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
	cout << *(ptrBA - 3) << endl; // probably for printing 1




	cout << endl << endl << endl;
    //cell object new bi-dimensional array
    cell bArray[5][6] = { 
        {cell(1),cell(1),cell(1),cell(1),cell(1),cell(1)}, 
        {cell(0),cell(0),cell(0),cell(0),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(0),cell(1)},
        {cell(1),cell(1),cell(1),cell(1),cell(2),cell(1)} };

    for (int row = 0; row < 5; row++) 
    {
        for (int col = 0; col < 6; col++) 
        {
            cout << bArray[row][col].getCellType() << " ";
        }
        cout << endl;
    }

    cell* ptr;
    ptr = &bArray[0][0];
    //cout << ptr->getCellType() << endl;

    //pathFinder pf1(ptr, 1, 0);
    //pf1.search();

	vector<string>path;
	for (int row = 0; row < 5; row++)
	{
		bool status = dfs2(0, &ptr[row*6], 6, path);
		cout << "Status: " << status << endl;
	}
}

//void Application2() {
//	int i;
//	const int size = 10;
//	int array[size] = { 0 };
//
//	srand(time(0));
//	cout << "Enter the initial position [0..9]: ";
//	cin >> i;
//	array[rand() % 10] = 1; // define position with value 1
//	// display array
//	for (int j = 0; j < size; j++) cout << " " << array[j];
//	cout << endl;
//	for (int j = 0; j < i; j++) cout << "  ";
//	cout << " i\n";
//
//	vector<string>path;
//	dfs2(i, array, 9, path);
//	//dfs2(i, array, 9, 0, 9, path);
//	cout << "Solution\n";
//	for (int i = path.size() - 1; i >= 0; i--) cout << path.at(i);
//}

//bool dfs2(int i, int a[], int arrayLimit, int currentDepth, int maxDepth, vector<string>& p) {
//	if (a[i] == 1) { // stop condition
//		return true;
//	}
//
//	if (currentDepth < maxDepth) {
//		if (i > 0 && dfs2(i - 1, a, arrayLimit, currentDepth + 1, maxDepth, p)) { // move to the left
//			cout << "<-\n";
//			p.push_back("<-\n");
//			return true;
//		}
//		else if (i < arrayLimit && dfs2(i + 1, a, arrayLimit, currentDepth + 1, maxDepth, p)) { // it can move to the right
//			cout << "->\n";
//			p.push_back("->\n");
//			return true;
//		}
//	}
//	return false;
//}

bool dfs2(int i, cell* ptr, int arrayLimit, vector<string>& p) {
	if (ptr[i].getCellType() == 2) { // stop condition
		return true;
	}

	ptr[i].setCellType(3); // mark as visited

	if (i > 0 && ptr[i - 1].getCellType() != 3 && dfs2(i - 1, ptr, arrayLimit, p)) { // move to the left
		cout << "<-\n";
		p.push_back("<-\n");
		return true;
	}
	else if (i < arrayLimit && ptr[i + 1].getCellType() != 3 && dfs2(i + 1, ptr, arrayLimit, p)) { // it can move to the right
		cout << "->\n";
		p.push_back("->\n");
		return true;
	}
	return false;
}

//https://www.geeksforgeeks.org/a-search-algorithm/
// https://www.tutorialspoint.com/cplusplus/cpp_pointer_to_pointer.htm
// http://www.cplusplus.com/forum/beginner/64451/
