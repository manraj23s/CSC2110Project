#include <iostream>
#include "cell.h"
#include "pathFinder.h"
#include "position.h"
using namespace std;

void position::setColumn(int acolumn) {
	column = acolumn;
}
void position::setRow(int arow) {
	row = arow;
}
int position::getColumn() {
	return column;
}
int position:: getRow() {
	return row;
}
position::position() {
	row = 0;
	column = 0;

}
position::position(int arow, int acolumn) {
	row = arow;
	column = acolumn;

}
