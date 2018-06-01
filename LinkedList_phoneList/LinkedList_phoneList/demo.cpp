#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************/
/* ���Ա�--ͨѶ¼

	��ϵ����Ϣ������ �绰

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