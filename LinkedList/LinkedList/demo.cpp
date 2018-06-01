#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************/
/* ���Ա�--������

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
	Node node1;
	node1.data = 3;
	Node node2;
	node2.data = 4;
	Node node3;
	node3.data = 5;
	Node node4;
	node4.data = 6;

	Node node5;
	node5.data = 7;

	Node temp;

	List *pList = new List();

	/*pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);
	pList->ListInsertHead(&node3);
	pList->ListInsertHead(&node4);*/

	pList->ListInsertTail(&node1);
	pList->ListInsertTail(&node2);
	pList->ListInsertTail(&node3);
	pList->ListInsertTail(&node4);

	pList->ListInsert(1, &node5);

	//pList->ListDelete(1, &temp);
	//pList->GetElem(1, &temp);
	//pList->PriorElem(&node5, &temp);
	pList->NextElem(&node5, &temp);

	pList->ListTraverse();

	cout << "temp=" << temp.data << endl;

	delete pList;
	pList = NULL;

	system("pause");
	return 0;
}