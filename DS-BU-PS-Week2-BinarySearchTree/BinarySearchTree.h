/*
 * BinarySearchTree.h
 *
 *  Created on: 11 Aug 2020
 *      Author: cmshalom
 */

#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

class BinarySearchTree {
public:
	BinarySearchTree(int data);
	virtual ~BinarySearchTree();
	void Insert(int item);
	bool Contains(int item);
	BinarySearchTree *Delete(int item);
	void TraverseInorder();
	void TraversePreorder();
	void TraversePostorder();
private:
	int data;
	BinarySearchTree *left, *right;

	BinarySearchTree *Search(int item);
	BinarySearchTree *DeleteNode();
	void GetPredecessor(int &data);
};

#endif /* BINARYSEARCHTREE_H_ */
