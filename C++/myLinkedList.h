struct Node {
    int data;
    struct Node* next;
};
void myListEnumerate(struct Node* node);
void myInsertHead(struct Node* head, struct Node* newNode);
void myInsertAfter(struct Node* prevNode, struct Node* newNode);
void myInsertTail(struct Node* head, struct Node* newNode);
void myDelete(struct Node* head, struct Node* nodeDel);
void myPopLast(struct Node* head);
void myPopFirst(struct Node* head);