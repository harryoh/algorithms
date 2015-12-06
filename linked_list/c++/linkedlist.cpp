///////////////////////////////////////////////////////////////////////////////
/// @file       https://github.com/harryoh/algorithms/blob/master/linked_list/c++/linkedlist.cpp
/// @~english
/// @brief      Linked List Class
/// @~
/// @authors    Harry Oh (harry@5004.pe.kr)
/// @copyright  Harry Oh
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "linkedlist.hpp"

LinkedList::LinkedList()
: head(NULL) {
}

LinkedList::~LinkedList() {
}

void LinkedList::AddNode(int value) {
  Node *node = new Node();
  node->value = value;
  node->next = head;
  head = node;
}

void LinkedList::DelNode(void) {
  if (head == NULL) {
    return;
  }
  Node *node = head;
  head = node->next;
  delete node;
}

void LinkedList::Print(void) {
  int i = 0;
  Node *node = head;
  while (node) {
    std::cout << node->value << std::endl;
    node = node->next;
  }
}
