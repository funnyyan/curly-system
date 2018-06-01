#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;

/*******************************************************************/
/*
	ջ��
	
	����һ:

	Ҫ��
		MyStack(int size);      //�����ڴ��ʼ��ջ�ռ䣬�趨ջ������ջ��
		~MyStack();             //����ջ�ռ��ڴ�
		bool stackEmpty();      //�ж�ջ�Ƿ�Ϊ�գ�Ϊ�շ���true���ǿշ���false
		bool stackFull();       //�ж�ջ�Ƿ�������Ϊ������true����������false
		void clearStack();      //���ջ
		int stackLength();      //����Ԫ�صĸ���
		void push(char elem);   //Ԫ����ջ��ջ������
		char pop(char &elem);	//Ԫ�س�ջ��ջ���½�
		void stackTraverse();	//����ջ������Ԫ��

	Ŀ�ģ�����ջ��ʵ��ԭ������л���


	�����:

	ջ
	Ҫ��
		1.����Coordinate������
		2.����ջ�࣬ʹ�����������������

	Ŀ�ģ��������ջ���ƣ�����������������ջ�е�Ӧ��


	��������

	ջ  ��ģ��
	Ҫ��
		����ͨջ����Ϊģ��ջ��ʹ������������κ���������

	Ŀ�ģ��������ջ���ƣ�����������������ջ�е�Ӧ��

*/
/*******************************************************************/


int main(void)
{
	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);

	pStack->push(Coordinate(1, 2)); //��
	pStack->push(Coordinate(3, 4));

	//pStack->push('h'); //��
	//pStack->push('e');
	//pStack->push('l');
	//pStack->push('l');
	//pStack->push('o'); //��

	pStack->stackTraverse(true);

	//char elem = 0;
	//pStack->pop(elem);

	//cout << endl;
	//cout << elem << endl;

	//pStack->clearStack();

	pStack->stackTraverse(false);

	cout << pStack->stackLength() << endl;

	if (pStack->stackEmpty())
	{
		cout << "ջΪ��" << endl;
	}

	if (pStack->stackFull())
	{
		cout << "ջΪ��" << endl;
	}

	delete pStack;
	pStack = NULL;

	system("pause");
	return 0;
}