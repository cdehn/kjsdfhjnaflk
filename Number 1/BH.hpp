/*
 * BH.hpp
 *
 *  Created on: Apr 17, 2015
 *      Author: Christina
 */

#ifndef NUMBER_1_BH_HPP_
#define NUMBER_1_BH_HPP_
#include<string>
using namespace std;

class BH{
	friend class NodeHeap;
	/*NodeHeap *root;
	NodeHeap *lChild;
	NodeHeap *rChild;
	NodeHeap *parent;
	*/int currsize;
	int mChild;
public:
	BH();
	~BH();
	int getLeftChild();
	int getRightChild();
	void printTree();
	void remove();
	void insert(int x);
	int maxChild();
};




#endif /* NUMBER_1_BH_HPP_ */
