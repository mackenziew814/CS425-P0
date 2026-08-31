#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

//Basic tests for multiplication function
void test_multiplication(void){
  TEST_ASSERT_EQUAL_INT(9, multiply(3, 3));
  TEST_ASSERT_EQUAL_INT(0, multiply(0, 3));
}

//Basic tests for incorrect addition function
void test_incorrectAddition(void){
  TEST_ASSERT_NOT_EQUAL(3 + 3, incorrectAddition(3, 3));
  TEST_ASSERT_NOT_EQUAL(-3 + 3, incorrectAddition(-3, 3));

}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_incorrectAddition);
  return UNITY_END();
}
