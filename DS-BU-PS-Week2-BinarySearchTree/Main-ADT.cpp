#include <iostream>
using namespace std;

#include "BinarySearchTree-ADT.h"


int main() {
	cout << "initializing tree..." << endl;
	Node* tree = constructNode(30);

	cout << "inserting some items..." << endl;
	Insert(tree, 20);
	Insert(tree, 10);
	Insert(tree, 40);
	Insert(tree, 50);
	Insert(tree, 60);

	cout << "searching for 50..." << endl;
	cout << "found: " << Contains(tree, 50) << endl;

	cout << "deleting 50..." << endl;
	Delete(tree, 50);

	cout << "traversing the tree..." << endl;
	cout << "inorder: ";
	TraverseInorder(tree);
	cout << endl;
	cout << "preorder: ";
	TraversePreorder(tree);
	cout << endl;
	cout << "postorder: ";
	TraversePostorder(tree);
	cout << endl;

	return 0;
}
