#ifndef COORDINATE_H
#define COORDINATE_H

#include <ostream>
using namespace std;

class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x = 0, int y = 0); //赋予默认值，使其成为默认构造函数
	void printCoordinate();
	bool operator==(Coordinate &coor);
private:
	int m_iX;
	int m_iY;
};

#endif
