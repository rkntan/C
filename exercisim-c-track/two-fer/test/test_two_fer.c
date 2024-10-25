#include "../test-framework/unity.h"
#include "../src/two_fer.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

#define BUFFER_SIZE (100)

void setUp(void)
{
    // Set up any preconditions for your tests here.
}

void tearDown(void)
{
    // Clean up after your tests here.
}

static void test_two_fer_no_name_given(void)
{
   char response[BUFFER_SIZE];
   const char *expected = "One for you, one for me.";
   two_fer(response, NULL);
   TEST_ASSERT_EQUAL_STRING(expected, response);
}

static void test_two_fer_a_name_given(void)
{
   char response[BUFFER_SIZE];
   const char *expected = "One for Alice, one for me.";
   two_fer(response, "Alice");
   TEST_ASSERT_EQUAL_STRING(expected, response);
}

static void test_two_fer_another_name_given(void)
{
   char response[BUFFER_SIZE];
   const char *expected = "One for Bob, one for me.";
   two_fer(response, "Bob");
   TEST_ASSERT_EQUAL_STRING(expected, response);
}

int main(void)
{
    printf("Starting tests...\n");
    UNITY_BEGIN();

   RUN_TEST(test_two_fer_no_name_given);
   RUN_TEST(test_two_fer_a_name_given);
   RUN_TEST(test_two_fer_another_name_given);

    return UNITY_END();
}
