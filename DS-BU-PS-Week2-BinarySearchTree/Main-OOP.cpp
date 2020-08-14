#include <iostream>
using namespace std;

#include "BinarySearchTree.h"


int main() {
	cout << "initializing tree..." << endl;
	BinarySearchTree* tree = new BinarySearchTree(30);

	BinarySearchTree t(30);
	t.Insert(40);

	cout << "inserting some items..." << endl;
	tree->Insert(20);
	tree->Insert(10);
	tree->Insert(40);
	tree->Insert(50);
	tree->Insert(60);

	cout << "searching for 50..." << endl;
	cout << "found: " << tree->Contains(50) << endl;

	cout << "deleting 50..." << endl;
	tree->Delete(50);

	cout << "traversing the tree..." << endl;
	cout << "inorder: ";
	tree->TraverseInorder();
	cout << endl;
	cout << "preorder: ";
	tree->TraversePreorder();
	cout << endl;
	cout << "postorder: ";
	tree->TraversePostorder();
	cout << endl;

	delete tree;

	return 0;
}
