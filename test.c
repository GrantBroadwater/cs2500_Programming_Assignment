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

test2()
{
  int x = 4;
  int y = 3;
  int m = max(x, y);

  if(m == 4)
    return true;
  return false;
}

test3()
{
  int a[] = {3,2,2,3,1,2};
  int x = getLargestPossibleScore(a, 0, 5);

  if(x == 8)
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

  result = test2();
  if(!result)
  {
    printf("Test 2 failed.\n");
    return;
  }
  else
  {
    printf("Test 2 passed.\n");
  }

  result = test3();
  if(!result)
  {
    printf("Test 3 failed.\n");
    return;
  }
  else
  {
    printf("Test 3 passed.\n");
  }

  return;
}

int main()
{
  performTestCases();

  return 0;
}
