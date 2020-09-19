#include "unity.h"
#include "arrayfunction.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sort(void)
{
  TEST_ASSERT_EQUAL((1 2 3 4 5), sort(1 2 3 4 5));
  TEST_ASSERT_EQUAL((2 5 8 10), sort(2 5 8 10));
}
void test_minmax(void)
{
  TEST_ASSERT_EQUAL((1 10), minmax(1 3 2 10));
  TEST_ASSERT_EQUAL((0 5), minmax(0 2 4 5));
}
void test_findnum(void)
{
  TEST_ASSERT_EQUAL(5, findnum((1 2 3 4 5 6),(5)));
  TEST_ASSERT_EQUAL(1, findnum((4 2 1 6 9),(4)));
}
void test_descending(void)
{
  TEST_ASSERT_EQUAL((6 5 4 3 2 1), descending(1 2 3 4 5 6));
  TEST_ASSERT_EQUAL((9 8 7 6), descending(7 8 6 9));
}
void test_insertion(void)
{
  TEST_ASSERT_EQUAL((1 15 2 3 4 5 6), insertion((1 2 3 4 5 6),(2),(15)));
  TEST_ASSERT_EQUAL(4 2 1 0 6 9, insertion((4 2 1 6 9),(4),(0)));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
 
  RUN_TEST(test_sort);
  RUN_TEST(test_minmax);
  RUN_TEST(test_findnum);
  RUN_TEST(descending);
  RUN_TEST(test_insertion);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
