///////////////////////////////////////////////////////////////////////////////
/// @file       https://github.com/harryoh/algorithms/blob/master/linked_list/c++/main.cpp
/// @~english
/// @brief      Single Lined List Example
/// @~
/// @authors    Harry Oh (harry@5004.pe.kr)
/// @copyright  Harry Oh
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "linkedlist.hpp"

int main(void) {
  LinkedList list;
  int arr[] = {1, 4, 2, 188};
  for (auto x = std::begin(arr); x != std::end(arr);) {
    list.AddNode(*x++);
  }

  std::cout << "<Listed List>" << std::endl;
  list.Print();

  std::cout << "Del List" << std::endl;
  list.DelNode();
  std::cout << "Del List" << std::endl;
  list.DelNode();

  std::cout << "<Listed List>" << std::endl;
  list.Print();

  return 0;
}

