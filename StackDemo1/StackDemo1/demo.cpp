#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
using namespace std;

/*******************************************************************/
/*
	ջӦ�á�������ת��
	
	���������������ʮ����������N���ֱ����������N�Ķ����ơ��˽��ơ�ʮ�����Ƶ���

	��ʽ��N = (N div d) * d + N mod d (div��ʾ������mod��ʾ����)

	(1348)(ʮ����) = (2504)(�˽���) = (544)(ʮ������) = (10101000100)(������)

	�̳���

			N			N div 8			N mod 8
		   1348           168              4
		    168            21              0
			 21             2              5
			  2             0              2


			N			N div 16		N mod 16
		   1348            84              4
			 84             5              4
			  5             0              5


	Ŀ�ģ�ͨ��ʵ���������ջ���Ƶ�ʹ�ü���

*/
/*******************************************************************/

#define BINARY         2
#define OCTONARY       8
#define HEXADECIMAL    16

int main(void)
{
	char num[] = "0123456789ABCDEF";

	MyStack<int> *pStack = new MyStack<int>(30);

	int N = 2016;

	int mod = 0;

	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}

	//pStack->stackTraverse(false);

	int elem = 0;
	while (!pStack->stackEmpty())
	{
		pStack->pop(elem);
		cout << num[elem];
	}

	delete pStack;
	pStack = NULL;

	system("pause");
	return 0;
}