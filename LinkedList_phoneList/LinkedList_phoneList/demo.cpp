#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************/
/* 线性表--通讯录

	联系人信息：姓名 电话

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
	Node node1;
	node1.data.name = "tester1";
	node1.data.phone = "123456";
	Node node2;
	node2.data.name = "tester2";
	node2.data.phone = "234567";

	List *pList = new List();

	pList->ListInsertTail(&node1);
	pList->ListInsertTail(&node2);

	pList->ListTraverse();

	delete pList;
	pList = NULL;

	system("pause");
	return 0;
}