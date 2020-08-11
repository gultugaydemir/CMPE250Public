typedef struct node Node;

Node *constructNode(int data);
Node *Insert(Node *tree, int item);
bool Contains(Node* tree, int item);
Node *Delete(Node* tree, int item);
void TraverseInorder(Node* tree);
void TraversePreorder(Node* tree);
void TraversePostorder(Node* tree);
