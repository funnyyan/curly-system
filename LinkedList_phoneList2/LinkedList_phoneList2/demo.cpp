#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

/****************************************************************/
/* ���Ա�--ͨѶ¼

	��ϵ����Ϣ������ �绰

	���ܲ˵���
		1.�½���ϵ��
		2.ɾ����ϵ��
		3.�����ϵ��
		4.�˳���ϵ��

		�����룺

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

int menu()
{
	//��ʾͨѶ¼���ܲ˵�
	cout << "���ܲ˵�" << endl;
	cout << "1.�½���ϵ��" << endl;
	cout << "2.ɾ����ϵ��" << endl;
	cout << "3.���ͨѶ¼" << endl;
	cout << "4.�˳�ͨѶ¼" << endl;

	cout << "�����룺";

	int order = 0;

	cin >> order;

	return order;
}

void createPerson(List *pList)
{
	Node node;
	Person person;
	cout << "������������";
	cin >> person.name;
	cout << "������绰��";
	cin >> person.phone;
	node.data = person;
	pList->ListInsertTail(&node);
}

void deletePerson(List *pList)
{
	int i = 0;
	cout << "������Ҫɾ���ڼ�����¼��";
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
			cout << "�û�ָ��--->>�½���ϵ��" << endl;
			createPerson(pList);
			break;
		case 2:
			cout << "�û�ָ��--->>ɾ����ϵ��" << endl;
			deletePerson(pList);
			break;
		case 3:
			cout << "�û�ָ��--->>���ͨѶ¼" << endl;
			pList->ListTraverse();
			break;
		case 4:
			cout << "�û�ָ��--->>�˳�ͨѶ¼" << endl;
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