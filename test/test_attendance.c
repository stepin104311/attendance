#include "attendance.h"
#include "unity.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_normal(void)
{
  TEST_ASSERT_EQUAL(500, normal(83, 500));
  TEST_ASSERT_EQUAL(500, normal(76, 500));
}
void test_cac(void)
{
  TEST_ASSERT_EQUAL(600, cac(70, 1, 0, 500, 100));
  TEST_ASSERT_EQUAL(700, cac(70, 1, 2, 500, 200));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_normal);
  RUN_TEST(test_cac);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
