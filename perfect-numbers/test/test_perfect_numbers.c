#include "../src/perfect_numbers.h"
#include "../test-framework/unity.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE (100)

void setUp(void) {
    // Set up any preconditions for your tests here.
}

void tearDown(void) {
    // Clean up after your tests here.
}

static void test_smallest_perfect_number_is_classified_correctly(void) {
    TEST_ASSERT_EQUAL(PERFECT_NUMBER, classify_number(6));
}

static void test_medium_perfect_number_is_classified_correctly(void) {
    // delete this line to run test
    TEST_ASSERT_EQUAL(PERFECT_NUMBER, classify_number(28));
}

static void test_large_perfect_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(PERFECT_NUMBER, classify_number(33550336));
}

static void test_smallest_abundant_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(ABUNDANT_NUMBER, classify_number(12));
}

static void test_medium_abundant_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(ABUNDANT_NUMBER, classify_number(30));
}

static void test_large_abundant_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(ABUNDANT_NUMBER, classify_number(33550335));
}

static void test_smallest_prime_deficient_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(DEFICIENT_NUMBER, classify_number(2));
}

static void test_smallest_non_prime_deficient_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(DEFICIENT_NUMBER, classify_number(4));
}

static void test_medium_deficient_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(DEFICIENT_NUMBER, classify_number(32));
}

static void test_large_deficient_number_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(DEFICIENT_NUMBER, classify_number(33550337));
}

static void test_edge_case_is_classified_correctly(void) {

    TEST_ASSERT_EQUAL(DEFICIENT_NUMBER, classify_number(1));
}

static void test_zero_is_rejected(void) {

    TEST_ASSERT_EQUAL(ERROR, classify_number(0));
}

static void test_negative_integer_is_rejected(void) {

    TEST_ASSERT_EQUAL(ERROR, classify_number(-1));
}

int main(void) {
    printf("Starting tests...\n");
    UNITY_BEGIN();

    RUN_TEST(test_smallest_perfect_number_is_classified_correctly);
    RUN_TEST(test_medium_perfect_number_is_classified_correctly);
    RUN_TEST(test_large_perfect_number_is_classified_correctly);
    RUN_TEST(test_smallest_abundant_number_is_classified_correctly);
    RUN_TEST(test_medium_abundant_number_is_classified_correctly);
    RUN_TEST(test_large_abundant_number_is_classified_correctly);
    RUN_TEST(test_smallest_prime_deficient_number_is_classified_correctly);
    RUN_TEST(test_smallest_non_prime_deficient_number_is_classified_correctly);
    RUN_TEST(test_medium_deficient_number_is_classified_correctly);
    RUN_TEST(test_large_deficient_number_is_classified_correctly);
    RUN_TEST(test_edge_case_is_classified_correctly);
    RUN_TEST(test_zero_is_rejected);
    RUN_TEST(test_negative_integer_is_rejected);

    return UNITY_END();
}
