#ifndef LIST_H
#define LIST_H

#include "Coordinate.h"

class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	//bool GetElem(int i, int *e);
	bool GetElem(int i, Coordinate *e);
	//int LocateElem(int *e);
	int LocateElem(Coordinate *e);
	//bool PriorElem(int *currentElem, int *preElem);
	bool PriorElem(Coordinate *currentElem, Coordinate *preElem);
	//bool NextElem(int *currentElem, int *nextElem);
	bool NextElem(Coordinate *currentElem, Coordinate *nextElem);
	void ListTraverse();
	//bool ListInsert(int i, int *e);
	bool ListInsert(int i, Coordinate *e);
	//bool ListDelete(int i, int *e);
	bool ListDelete(int i, Coordinate *e);

private:
	//int *m_pList;
	Coordinate *m_pList;
	int m_iSize;
	int m_iLength;
};

#endif