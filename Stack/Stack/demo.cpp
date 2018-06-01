#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;

/*******************************************************************/
/*
	栈类
	
	任务一:

	要求：
		MyStack(int size);      //分配内存初始化栈空间，设定栈容量，栈顶
		~MyStack();             //回收栈空间内存
		bool stackEmpty();      //判定栈是否为空，为空返回true，非空返回false
		bool stackFull();       //判定栈是否已满，为满返回true，不满返回false
		void clearStack();      //清空栈
		int stackLength();      //已有元素的个数
		void push(char elem);   //元素入栈，栈顶上升
		char pop(char &elem);	//元素出栈，栈顶下降
		void stackTraverse();	//遍历栈中所有元素

	目的：掌握栈的实现原理和运行机制


	任务二:

	栈
	要求：
		1.定义Coordinate坐标类
		2.改造栈类，使其可以适用于坐标类

	目的：灵活掌握栈机制，理解抽象数据类型在栈中的应用


	任务三：

	栈  类模板
	要求：
		将普通栈改造为模板栈，使其可以适用于任何数据类型

	目的：灵活掌握栈机制，理解抽象数据类型在栈中的应用

*/
/*******************************************************************/


int main(void)
{
	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);

	pStack->push(Coordinate(1, 2)); //底
	pStack->push(Coordinate(3, 4));

	//pStack->push('h'); //底
	//pStack->push('e');
	//pStack->push('l');
	//pStack->push('l');
	//pStack->push('o'); //顶

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
		cout << "栈为空" << endl;
	}

	if (pStack->stackFull())
	{
		cout << "栈为满" << endl;
	}

	delete pStack;
	pStack = NULL;

	system("pause");
	return 0;
}