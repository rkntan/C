#include "../test-framework/unity.h"
#include "../src/eliuds_eggs.h"
#include <stdlib.h>
#include <stdio.h>

void setUp(void)
{
    // Set up any preconditions for your tests here.
}

void tearDown(void)
{
    // Clean up after your tests here.
}


static void test_0_eggs(void)
{
   const unsigned int expected = 0;
   TEST_ASSERT_EQUAL_UINT(expected, egg_count(0));
}
static void test_1_eggs(void)
{
   const unsigned int expected = 1;
   TEST_ASSERT_EQUAL_UINT(expected, egg_count(16));
}
static void test_4_eggs(void)
{
   const unsigned int expected = 4;
   TEST_ASSERT_EQUAL_UINT(expected, egg_count(89));
}
static void test_13_eggs(void)
{
   const unsigned int expected = 13;
   TEST_ASSERT_EQUAL_UINT(expected, egg_count(2000000000));
}

int main(void)
{
    printf("Starting tests...\n");
    UNITY_BEGIN();
   RUN_TEST(test_0_eggs);
   RUN_TEST(test_1_eggs);
   RUN_TEST(test_4_eggs);
   RUN_TEST(test_13_eggs);
    return UNITY_END();
}
