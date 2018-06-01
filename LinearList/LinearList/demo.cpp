#include <stdlib.h>
#include "List.h"
#include <iostream>
using namespace std;

/****************************************************************/
/* ���Ա�--˳���

	3 5 7 2 9 1 8

	ǰ��  ���
	BOOL InitList(List **list);										//�������Ա�
	void DestroyList(List *list);									//�������Ա�
	void ClearList(List *list);										//������Ա�
	BOOL ListEmpty(List *list);										//�ж����Ա��Ƿ�Ϊ��
	int ListLength(List *list);										//��ȡ���Ա���
	BOOL GetElem(List *list, int i, Elem *e);						//��ȡָ��Ԫ��
	int LocateElem(List *list, Elem *e);							//Ѱ�ҵ�һ������e������Ԫ�ص�λ��
	BOOL PriorElem(List *list, Elem *currentElem, Elem *preElem);	//��ȡָ��Ԫ�ص�ǰ��
	BOOL NextElem(List *list, Elem *currentElem, Elem *nextElem);	//��ȡָ��Ԫ�صĺ��
	BOOL ListInsert(List *list, int i, Elem *e);					//�ڵ�i��λ�ò���Ԫ��
	BOOL ListDelete(List *list, int i, Elem *e);					//��ɾ����i��λ�õ�Ԫ��
	void ListTraverse(List *list);									//�������Ա�

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