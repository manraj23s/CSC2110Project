#pragma once

class position
{
private:
	int column;
	int row;
public:
	void setColumn(int);
	void setRow(int);
	int getColumn();
	int getRow();
	position();
	position(int, int);
};
