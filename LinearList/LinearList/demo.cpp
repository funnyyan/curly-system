#include <stdlib.h>
#include "List.h"
#include <iostream>
using namespace std;

/****************************************************************/
/* 线性表--顺序表

	3 5 7 2 9 1 8

	前驱  后继
	BOOL InitList(List **list);										//创建线性表
	void DestroyList(List *list);									//销毁线性表
	void ClearList(List *list);										//清空线性表
	BOOL ListEmpty(List *list);										//判断线性表是否为空
	int ListLength(List *list);										//获取线性表长度
	BOOL GetElem(List *list, int i, Elem *e);						//获取指定元素
	int LocateElem(List *list, Elem *e);							//寻找第一个满足e的数据元素的位序
	BOOL PriorElem(List *list, Elem *currentElem, Elem *preElem);	//获取指定元素的前驱
	BOOL NextElem(List *list, Elem *currentElem, Elem *nextElem);	//获取指定元素的后继
	BOOL ListInsert(List *list, int i, Elem *e);					//在第i个位置插入元素
	BOOL ListDelete(List *list, int i, Elem *e);					//在删除第i个位置的元素
	void ListTraverse(List *list);									//遍历线性表

*/
/****************************************************************/

int main(void)
{
	//3 5 7 2 9 1 8
	Coordinate e1(3, 5);
	Coordinate e2(5, 7);
	Coordinate e3(6, 8);

	/*int e1 = 3;
	int e2 = 5;
	int e3 = 7;
	int e4 = 2;
	int e5 = 9;
	int e6 = 1;
	int e7 = 8;*/
	Coordinate temp(0, 0);

	List *list1 = new List(10);

	//cout << "length:" << list1->ListLength() << endl;

	list1->ListInsert(0, &e1);

	//cout << "length:" << list1->ListLength() << endl;

	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	/*list1->ListInsert(3, &e4);
	list1->ListInsert(4, &e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(6, &e7);*/

	/*list1->ListDelete(0, &temp);

	if (!list1->ListEmpty())
	{
		cout << "not empty" << endl;
	}

	list1->ClearList();

	if (list1->ListEmpty())
	{
		cout << "empty" << endl;
	}*/

	list1->ListTraverse();

	/*list1->PriorElem(&e4, &temp);
	cout << "temp:" << temp << endl;
	list1->NextElem(&e4, &temp);
	cout << "temp:" << temp << endl;*/

	/*list1->GetElem(0, &temp);
	cout << "temp:" << temp << endl;

	cout << list1->LocateElem(&temp) << endl;*/

	//cout << "#" << temp << endl;

	delete list1;

	system("pause");
	return 0;
}