#ifndef CMAP_H
#define CMAP_H

#include <vector>
using namespace std;
#include "Node.h"
#include "Edge.h"

class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);		//��ͼ�м��붥�㣨��㣩
	
	void resetNode();				//���ö���
	
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);		//Ϊ����ͼ�����ڽӾ���
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);		//Ϊ����ͼ�����ڽӾ���

	void printMatrix();		//��ӡ�ڽӾ���

	void depthFirstTraverse(int nodeIndex);		//������ȱ���
	void breadthFirstTraverse(int nodeIndex);	//������ȱ���

	void primTree(int nodeIndex); //����ķ������
	void kruskalTree();			  //��³˹�����㷨������

private:
	bool getValueFromMatrix(int row, int col, int &val);	//�Ӿ����л�ȡȨֵ
	void breadthFirstTraverseImpl(vector<int> preVec);		//������ȱ���ʵ�ֺ���

	int getMinEdge(vector<Edge> edgeVec);				//��ȡ��С��
	bool isInSet(vector<int> nodeSet, int target);		//�ж϶����Ƿ��ڵ㼯����
	void mergeNodeSet(vector<int> &nodeSetA, vector<int> nodeSetB);	//�ϲ��������㼯��

private:
	int m_iCapacity;		//ͼ�����������ɵĶ�����
	int m_iNodeCount;		//������ӵĶ��㣨��㣩����
	Node *m_pNodeArray;		//������Ŷ�������
	int *m_pMatrix;			//��������ڽӾ���

	Edge *m_pEdge;			//����������С��
};

#endif