#include <iostream>

// Struture of a node of a linked list
struct Node {
    int data;
    struct Node* next;
};

// Insert an element at the front of a linked list
struct Node* myInsert(struct Node* head, int nodeData) {
    struct Node* newNode = new Node;
    newNode -> data = nodeData;
    newNode -> next = head;
    return newNode;
}

// Inserts a node at the front of the list
void myInsertHead(struct Node* head, struct Node* newNode) {
    newNode -> next = head ->next;
    head ->next = newNode;
}

// insert a node after the input node
void myInsertAfter(struct Node* prevNode, struct Node* newNode) {
    newNode -> next = prevNode ->next;
    prevNode ->next = newNode;
}

// insert a node at the end of the list
void myInsertTail(struct Node* head, struct Node* newNode) {
    while (head -> next != NULL) {
        head = head -> next;
    }
    newNode -> next = head ->next;
    head ->next = newNode;
}

// Delete the first element of a linked list
void myPopFirst(struct Node* head) {
    if (head->next != NULL) {
        head->next = head->next->next;
    }
    else {
        std::cout << "Empty List" << '\n';
    }
}

// Delete the last element of a linked list
void myPopLast(struct Node* head) {
    if (head->next != NULL) {
        while (head -> next -> next != NULL) {
        head = head -> next;
        }
        head -> next = NULL;
    }
    else {
        std::cout << "Empty List" << '\n';
    }
}

// Delete a given element of a linked list
void myDelete(struct Node* head, struct Node* nodeDel) {
    while (head -> next != NULL && head -> next != nodeDel) {
        head = head -> next;
    }
    if (head -> next == nodeDel) {
        head -> next = nodeDel -> next;
    }
    else {
        std::cout << "Node not found" << '\n';
    }
}

// Delete the first element of a linked list
struct Node* myPopElement(struct Node* head, int DataPop) {
    struct Node* node = head;
    while (node != NULL) {
        if (node->data == DataPop) {
            node->next = node->next->next;
        }
    }
    head = head->next;
    return head;
}

// Print All the elements in the linked list (starting from the front)
void myListEnumerate (struct Node* node) {
    node = node -> next;
    while (node != NULL) {
        std::cout << node->data << '\n';
        node = node->next;
    }
}