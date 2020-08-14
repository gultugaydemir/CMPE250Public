/*
 * BinarySearchTree.cpp
 *
 *  Created on: 11 Aug 2020
 *      Author: cmshalom
 */

#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree::BinarySearchTree(int data) {
	left = NULL;
	right = NULL;
	this->data = data;
}

BinarySearchTree::~BinarySearchTree() {
	delete left;
	delete right;
}

void BinarySearchTree::Insert(int item) {
	if (item < data) {
		if (left) {
			left->Insert(item);
		} else {
			left = new BinarySearchTree(item);
		}
	} else {
		if (right) {
			right->Insert(item);
		} else {
			right = new BinarySearchTree(item);
		}
	}
}

BinarySearchTree *BinarySearchTree::Search(int data) {
	if (this->data == data) return this;
	BinarySearchTree* subtree = data < this->data ? left : right;
	return subtree ? subtree->Search(data) : NULL;
}

bool BinarySearchTree::Contains(int item) {
	return Search(item) != NULL;
}

void BinarySearchTree::TraverseInorder() {
	if (left) left->TraverseInorder();
	cout << data << " ";
	if (right) right->TraverseInorder();
}

void BinarySearchTree::TraversePreorder() {
	cout << data << " ";
	if (left) left->TraversePreorder();
	if (right) right->TraversePreorder();
}

void BinarySearchTree::TraversePostorder() {
	if (left) left->TraversePostorder();
	if (right) right->TraversePostorder();
	cout << data << " ";
}

BinarySearchTree *BinarySearchTree::Delete(int item) {return NULL;}
	/*
	if (item < tree->data) {
		Delete(tree->left, item);
	} else if (item > tree->data) {
		Delete(tree->right, item);
	} else {
		DeleteNode(tree); // Node found
	}
}

void GetPredecessor(node_pointer tree, int &data) {
	while (tree->right != NULL) {
		tree = tree->right;
	}
	data = tree->data;
}

void DeleteNode(node_pointer &tree) {
	int data;
	Node *tempPtr;
	tempPtr = tree;

	if (tree->left == NULL) {
		tree = tree->right;
		delete tempPtr;
	} else if (tree->right == NULL) {
		tree = tree->left;
		delete tempPtr;
	} else {
		GetPredecessor(tree->left, data);
		tree->data = data;
		Delete(tree->left, data);
	}
}

*/
