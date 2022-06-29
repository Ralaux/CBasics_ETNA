#include "myLinkedList.h"
#include <iostream>
#include <list> 
#include <string>

int main ()
{
  struct Node* head = new Node;
  struct Node* first = new Node;
  struct Node* second = new Node;
  struct Node* third = new Node;
  struct Node* fourth = new Node;

  head -> next = first;
  first -> data = 1;
  first -> next = second;
  second -> data = 2;
  second -> next = third;
  third -> data = 3;
  third -> next = fourth;
  fourth -> data = 4; 
  fourth -> next = NULL;
  
  myListEnumerate(head);

  /*
  Insertion Tests
  struct Node* front = new Node;
  front -> data = 10;
  struct Node* back = new Node;
  back -> data = -10;
  struct Node* middle = new Node;
  middle -> data = 50;
  myInsertHead(head, front);
  myInsertTail(head, back);
  myInsertAfter(second, middle);
  myListEnumerate(head);
  */
  
  /*
  Deletion Tests
  myPopFirst(head);
  std::cout << '1' << '\n';
  myPopLast(head);
  std::cout << '1' << '\n';
  myDelete(head,third);
  std::cout << '1' << '\n';
  myDelete(head, fourth);
  myListEnumerate(head);
  */
}