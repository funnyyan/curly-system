#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
using namespace std;

/*******************************************************************/
/*
	栈应用——数制转换
	
	描述：输入任意的十进制正整数N，分别输出该整数N的二进制、八进制、十六进制的数

	公式：N = (N div d) * d + N mod d (div表示整除，mod表示求余)

	(1348)(十进制) = (2504)(八进制) = (544)(十六进制) = (10101000100)(二进制)

	短除法

			N			N div 8			N mod 8
		   1348           168              4
		    168            21              0
			 21             2              5
			  2             0              2


			N			N div 16		N mod 16
		   1348            84              4
			 84             5              4
			  5             0              5


	目的：通过实例灵活掌握栈机制的使用技巧

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