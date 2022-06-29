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

// Delete the first element of a linked list
struct Node* myPop(struct Node* head) {
    head = head->next;
    return head;
}

// Print All the elements in the linked list (starting from the front)
void myListEnumerate (struct Node* node) {
    while (node != NULL) {
        std::cout << node->data;
        std::cout << '\n';
        node = node->next;
    }
}


int main () {
    struct Node* linked_list = myInsert(NULL, 8);
    linked_list = myInsert(linked_list, 9);
    linked_list = myInsert(linked_list, 9);
    linked_list = myInsert(linked_list, 9);
    linked_list = myInsert(linked_list, 9);
    std::cout << linked_list;
    std::cout << '\n';
    linked_list = myInsert(linked_list, 9);
    linked_list = myInsert(linked_list, 9);
    std::cout << linked_list;
    std::cout << '\n';
    return 1;
}