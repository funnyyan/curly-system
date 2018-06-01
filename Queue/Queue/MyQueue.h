#ifndef MYQUEUE_H
#define MYQUEUE_H

/***********************************************************************/
/* 环形队列C++实现 2018.5                                              */
/***********************************************************************/

#include "Customer.h"

class MyQueue
{
public:  // C++的写法                 // C语言的写法
	MyQueue(int queueCapacity);       //InitQueue(&Q) 创建队列
	virtual ~MyQueue();               //DestoryQueue(&Q) 销毁队列
	void ClearQueue();                //ClearQueue(&Q) 清空队列
	bool QueueEmpty() const;          //QueueEmpty(Q) 队列判空
	bool QueueFull() const;           //QueueFull(Q) 队列判满
	int QueueLength() const;          //QueueLength(Q) 队列长度
	//bool EnQueue(int element);        //EnQueue(&Q, element) 新元素入队
	bool EnQueue(Customer element);
	//bool DeQueue(int &element);       //DeQueue(&Q, &element) 首元素出队
	bool DeQueue(Customer &element);
	void QueueTraverse();             //QueueTraverse(Q, visit()) 遍历队列
private:
	// 简单类型的队列用的是int之类的类型，复杂类型的队列要相应修改
	//int *m_pQueue;                    //队列数组指针
	Customer *m_pQueue;
	int m_iQueueLen;                  //队列元素个数
	int m_iQueueCapacity;             //队列数组容量
	int m_iHead;                      //队列头位置
	int m_iTail;                      //队列尾位置
};


#endif
