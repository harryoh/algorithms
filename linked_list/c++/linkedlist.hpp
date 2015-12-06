///////////////////////////////////////////////////////////////////////////////
/// @file       https://github.com/harryoh/algorithms/blob/master/linked_list/c++/linkedlist.hpp
/// @~english
/// @brief      Linked List Class Header
/// @~
/// @authors    Harry Oh (harry@5004.pe.kr)
/// @copyright  Harry Oh
///////////////////////////////////////////////////////////////////////////////

class LinkedList {
  struct Node {
    int value;
    Node *next;
  };

 private:
  Node *head;

 public:
  LinkedList();
  ~LinkedList() noexcept;

  void AddNode(int value);
  void DelNode();
  void Print();
};
