typedef struct node {
	int data;
	struct node *left, *right;
} Node;

Node *Insert(Node *tree, int item);
Node *Search(Node* tree, int item);
Node *Delete(Node* tree, int item);
void TraverseInorder(Node* tree);
void TraversePreorder(Node* tree);
void TraversePostorder(Node* tree);
