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

static void test_egg_count_normal(void)
{
    TEST_ASSERT_EQUAL_UINT_MESSAGE(0, egg_count(0), "egg_count(0) should return 0");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(1, egg_count(16), "egg_count(16) should return 1");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(4, egg_count(89), "egg_count(89) should return 4");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(13, egg_count(2000000000), "egg_count(2000000000) should return 13");
}

static void test_egg_count_builtin(void)
{
    TEST_ASSERT_EQUAL_UINT_MESSAGE(0, egg_count_builtin(0), "egg_count_builtin(0) should return 0");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(1, egg_count_builtin(16), "egg_count_builtin(16) should return 1");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(4, egg_count_builtin(89), "egg_count_builtin(89) should return 4");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(13, egg_count_builtin(2000000000), "egg_count_builtin(2000000000) should return 13");
}

static void test_egg_count_bitwise(void)
{
    TEST_ASSERT_EQUAL_UINT_MESSAGE(0, egg_count_bitwise(0), "egg_count_bitwise(0) should return 0");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(1, egg_count_bitwise(16), "egg_count_bitwise(16) should return 1");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(4, egg_count_bitwise(89), "egg_count_bitwise(89) should return 4");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(13, egg_count_bitwise(2000000000), "egg_count_bitwise(2000000000) should return 13");
}

static void test_egg_count_edge_cases(void)
{
    TEST_ASSERT_EQUAL_UINT_MESSAGE(0, egg_count(0), "egg_count(0) should return 0 (no 1's in binary)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(1, egg_count(1), "egg_count(1) should return 1 (binary 000001 has one 1)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(1, egg_count(16), "egg_count(16) should return 1 (binary 10000 has one 1)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(2, egg_count(3), "egg_count(3) should return 2 (binary 000011 has two 1's)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(4, egg_count(89), "egg_count(89) should return 4 (binary 1011001 has four 1's)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(13, egg_count(2000000000), "egg_count(2000000000) should return 13 (binary representation has thirteen 1's)");
    TEST_ASSERT_EQUAL_UINT_MESSAGE(31, egg_count(2147483647), "egg_count(2147483647) should return 31 (binary 01111111111111111111111111111111 has thirty-one 1's)");
}


int main(void)
{
    printf("Starting tests...\n");
    UNITY_BEGIN();

    RUN_TEST(test_egg_count_normal);
    RUN_TEST(test_egg_count_builtin);
    RUN_TEST(test_egg_count_bitwise);
    RUN_TEST(test_egg_count_edge_cases);

    return UNITY_END();
}
