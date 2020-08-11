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
	BinarySearchTree *Insert(int item);
	bool Contains(int item);
	BinarySearchTree *Delete(int item);
	void TraverseInorder();
	void TraversePreorder();
	void TraversePostorder();
private:
};

#endif /* BINARYSEARCHTREE_H_ */
