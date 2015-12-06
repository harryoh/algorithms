///////////////////////////////////////////////////////////////////////////////
/// @file       https://github.com/harryoh/algorithms/blob/master/linked_list/c++/unit_test.cpp
/// @~english
/// @brief      Unit Test for Linked List Example
/// @~
/// @authors    Harry Oh (harry@5004.pe.kr)
/// @copyright  Harry Oh
///////////////////////////////////////////////////////////////////////////////


#include "cppunit/extensions/HelperMacros.h"
#include "linkedlist.hpp"

/**
 * @~english
 * A unit test class for LinkedList class
 */
class LinkedListTest : public CPPUNIT_NS::TestCase {
  /// @cond
  CPPUNIT_TEST_SUITE(LinkedListTest);
  CPPUNIT_TEST(InitCheck);
  CPPUNIT_TEST(BasicCheck);
  CPPUNIT_TEST(ExceptionCheck);
  CPPUNIT_TEST_SUITE_END();
  /// @endcond

 public:  /* tests */
  /**
   * @test Init Cgibase testing
   */
  void InitCheck() {
    LinkedList list;
    CPPUNIT_ASSERT(list.isInit() == false);
  }

  /**
   * Check Basic features
   */
  void BasicCheck() {
    LinkedList list;
    list.AddNode(12345);
    CPPUNIT_ASSERT_MESSAGE(
      "12345",
      list.Print();
      )
  }

  /**
   * Check Exceptions
   */
  void ExceptionCheck() {
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION(LinkedListTest);
