#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************/
/* 线性表--通讯录

	联系人信息：姓名 电话

	功能菜单：
		1.新建联系人
		2.删除联系人
		3.浏览联系人
		4.退出联系人

		请输入：

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

int menu()
{
	//显示通讯录功能菜单
	cout << "功能菜单" << endl;
	cout << "1.新建联系人" << endl;
	cout << "2.删除联系人" << endl;
	cout << "3.浏览通讯录" << endl;
	cout << "4.退出通讯录" << endl;

	cout << "请输入：";

	int order = 0;

	cin >> order;

	return order;
}

void createPerson(List *pList)
{
	Node node;
	Person person;
	cout << "请输入姓名：";
	cin >> person.name;
	cout << "请输入电话：";
	cin >> person.phone;
	node.data = person;
	pList->ListInsertTail(&node);
}

void deletePerson(List *pList)
{
	int i = 0;
	cout << "请输入要删除第几条记录：";
	cin >> i;
	Node node;
	pList->ListDelete(i - 1, &node);
}


int main(void)
{
	int userOrder = 0;

	List *pList = new List();

	while (userOrder != 4)
	{
		userOrder = menu();
		switch (userOrder)
		{
		case 1:
			cout << "用户指令--->>新建联系人" << endl;
			createPerson(pList);
			break;
		case 2:
			cout << "用户指令--->>删除联系人" << endl;
			deletePerson(pList);
			break;
		case 3:
			cout << "用户指令--->>浏览通讯录" << endl;
			pList->ListTraverse();
			break;
		case 4:
			cout << "用户指令--->>退出通讯录" << endl;
			break;
		default:
			break;
		}
	}
	delete pList;
	pList = NULL;




	/*Node node1;
	node1.data.name = "tester1";
	node1.data.phone = "123456";
	Node node2;
	node2.data.name = "tester2";
	node2.data.phone = "234567";

	List *pList = new List();

	pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);

	pList->ListTraverse();

	delete pList;
	pList = NULL;*/

	system("pause");
	return 0;
}