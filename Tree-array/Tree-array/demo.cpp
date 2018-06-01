
/*******************************************************************/
/*  二叉树（数组表示）

	课程要求：完成树的基本操作
	  1.树的创建和销毁
	  2.树中节点的搜索
	  3.树中节点的添加与删除
	  4.树中节点的遍历

	  BOOL CreateTree(Tree **pTree, Node *pRoot);
	  void DestoryTree(Tree *pTree);
	  Node *SearchNode(Tree *pTree, int nodeIndex);
	  BOOL AddNode(Tree *pTree, int nodeIndex, int direction, Node *pNode);
	  BOOL DeleteNode(Tree *pTree, int nodeIndex, Node *pNode);
	  void TreeTraverse(Tree *pTree);

	  关于数组与树之间的算法转换

	  int tree[n] 3   5 8   2 6 9 7		父亲节点下标*2+1 该节点左

										父亲节点下标*2+2 该节点右
				3(0)

		5(1)			8(2)

	2(3)	6(4)	9(5)	7(6)
*/
/*******************************************************************/

#include <iostream>
#include <stdlib.h>
#include "Tree.h"
using namespace std;


int main(void)
{
	int root = 3;
	Tree *pTree = new Tree(10, &root);
	int node1 = 5;
	int node2 = 8;
	pTree->AddNode(0, 0, &node1);
	pTree->AddNode(0, 1, &node2);

	int node3 = 2;
	int node4 = 6;
	pTree->AddNode(1, 0, &node3);
	pTree->AddNode(1, 1, &node4);

	int node5 = 9;
	int node6 = 7;
	pTree->AddNode(2, 0, &node5);
	pTree->AddNode(2, 1, &node6);

	int node = 0;
	pTree->DeleteNode(6, &node);
	cout << "node=" << node << endl;

	pTree->TreeTraverse();

	int *p = pTree->SearchNode(2);
	cout << endl << "node=" << *p << endl;

	delete pTree;

	system("pause");
	return 0;
}