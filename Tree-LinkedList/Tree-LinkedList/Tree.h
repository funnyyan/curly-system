#ifndef TREE_H
#define TREE_H
/*
	二叉树：链表实现

	Tree();														//创建树
	~Tree();													//销毁树
	Node *SearchNode(int nodeIndex);							//搜索结点
	bool AddNode(int nodeIndex, int direction, Node *pNode);	//添加结点
	bool DeleteNode(int nodeIndex, Node *pNode);				//删除结点
	void PreorderTraversal();									//前序遍历
	void InorderTraversal();									//中序遍历
	void PostorderTraversal();									//后序遍历

	结点要素：索引  数据  左孩子指针  右孩子指针  父结点指针

	前序遍历：0 1 3 4 2 5 6
	中序遍历：3 1 4 0 5 2 6
	后序遍历：3 4 1 5 6 2 0

				(0)

		5(1)			8(2)

	2(3)	6(4)	9(5)	7(6)

*/

#include "Node.h"
#include <stdio.h>

class Tree
{
public:
	Tree();														//创建树
	~Tree();													//销毁树
	Node *SearchNode(int nodeIndex);							//搜索结点
	bool AddNode(int nodeIndex, int direction, Node *pNode);	//添加结点
	bool DeleteNode(int nodeIndex, Node *pNode);				//删除结点
	void PreorderTraversal();									//前序遍历
	void InorderTraversal();									//中序遍历
	void PostorderTraversal();									//后序遍历

private:
	Node *m_pRoot;
};

#endif