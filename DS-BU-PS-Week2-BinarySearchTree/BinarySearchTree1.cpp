#include <iostream>

#include "BinarySearchTree1.h"
using namespace std;

static Node *DeleteNode(Node *tree);
//static void GetPredecessor(Node *tree, int &data);

Node *Insert(Node *tree, int item) {
	if (tree == NULL) {
		tree = new Node;
		tree->left = NULL;
		tree->right = NULL;
		tree->data = item;
	} else if (item < tree->data) {
		tree->left = Insert(tree->left, item);
	} else {
		tree->right = Insert(tree->right, item);
	}
	return tree;
}

Node *Search(Node * tree, int item) {
	if (tree == NULL) return NULL;
	if (tree->data == item) return tree;
	Node * subtree = item < tree->data ? tree->left : tree->right;
	return Search(subtree, item);
}

void TraverseInorder(Node *tree) {
	if (tree == NULL) return;
	TraverseInorder(tree->left);
	cout << tree->data << " ";
	TraverseInorder(tree->right);
}

void TraversePreorder(Node *tree) {
	if (tree == NULL) return;
	cout << tree->data << " ";
	TraversePreorder(tree->left);
	TraversePreorder(tree->right);
}

void TraversePostorder(Node *tree) {
	if (tree == NULL) return;
	TraversePostorder(tree->left);
	TraversePostorder(tree->right);
	cout << tree->data << " ";
}

Node *Delete(Node *tree, int item) {}
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
