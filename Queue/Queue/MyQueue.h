#ifndef MYQUEUE_H
#define MYQUEUE_H

/***********************************************************************/
/* ���ζ���C++ʵ�� 2018.5                                              */
/***********************************************************************/

#include "Customer.h"

class MyQueue
{
public:  // C++��д��                 // C���Ե�д��
	MyQueue(int queueCapacity);       //InitQueue(&Q) ��������
	virtual ~MyQueue();               //DestoryQueue(&Q) ���ٶ���
	void ClearQueue();                //ClearQueue(&Q) ��ն���
	bool QueueEmpty() const;          //QueueEmpty(Q) �����п�
	bool QueueFull() const;           //QueueFull(Q) ��������
	int QueueLength() const;          //QueueLength(Q) ���г���
	//bool EnQueue(int element);        //EnQueue(&Q, element) ��Ԫ�����
	bool EnQueue(Customer element);
	//bool DeQueue(int &element);       //DeQueue(&Q, &element) ��Ԫ�س���
	bool DeQueue(Customer &element);
	void QueueTraverse();             //QueueTraverse(Q, visit()) ��������
private:
	// �����͵Ķ����õ���int֮������ͣ��������͵Ķ���Ҫ��Ӧ�޸�
	//int *m_pQueue;                    //��������ָ��
	Customer *m_pQueue;
	int m_iQueueLen;                  //����Ԫ�ظ���
	int m_iQueueCapacity;             //������������
	int m_iHead;                      //����ͷλ��
	int m_iTail;                      //����βλ��
};


#endif
