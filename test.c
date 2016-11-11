/*

Author: Grant Broadwater
Date: November 15, 2016

*/

#include <stdio.h>
#include "functions.h"

typedef enum
{
  false,
  true
} bool;

bool test1()
{
  int a[] = {5, 5, 1, 1, 1, 1, 1, 10};
  int s = sum(a, 0, 7);

  if(s == 25)
    return true;
  return false;
}

performTestCases()
{
  bool result;

  result = test1();
  if(!result)
  {
    printf("Test 1 failed.\n");
    return;
  }
  else
  {
    printf("Test 1 passed.\n");
  }

  return;
}

int main()
{
  performTestCases();

  return 0;
}
