/*

Author: Grant Broadwater
Date: November 15, 2016

*/

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

typedef enum
{
  false,
  true
} bool;

bool test1(void)
{
  int a[] = {5, 5, 1, 1, 1, 1, 1, 10};
  int s = sum(a, 0, 7);

  if(s == 25)
    return true;
  return false;
}

bool test2(void)
{
  int x = 4;
  int y = 3;
  int m = max(x, y);

  if(m == 4)
    return true;
  return false;
}

bool test3(void)
{
  int a[] = {3,2,2,3,1,2};
  int size = 6;
  int i, j;
  int** table;
  table = (int**)malloc(size * sizeof(int));
  for(i=0; i<size; i++)
  {
    table[i] = (int*)malloc(size * sizeof(int));
    for(j=0; j<size; j++)
      table[i][j] = -1;
  }
  int x = calculateLargestPossibleScore(a, table, 0, size-1);

  if(x == 8)
    return true;
  return false;
}

bool test4(void)
{
  int a[] = {8, 15, 3, 7};
  int size = 4;
  int i, j;
  int** table;
  table = (int**)malloc(size * sizeof(int));
  for(i=0; i<size; i++)
  {
    table[i] = (int*)malloc(size * sizeof(int));
    for(j=0; j<size; j++)
      table[i][j] = -1;
  }
  int x = calculateLargestPossibleScore(a, table, 0, size-1);

  if(x == 22)
    return true;
  return false;
}

bool test5(void)
{
  int a[] = {8, 15, 3, 7};
  int size = 4;
  int x = getLargestPossibleScore(a, size);

  if(x == 22)
    return true;
  return false;
}

bool test6(void)
{
  int a[] = {20,30,2,2,2,10};
  int size = 6;
  int x = getLargestPossibleScore(a, size);

  if(x == 42)
    return true;
  return false;
}

bool test7(void)
{
  int a[] = {7,8};
  int size = 2;
  int x = getLargestPossibleScore(a, size);

  if(x == 8)
    return true;
  return false;
}

bool test8()
{
  int a[] = {20,30,2,2,2,10,13,1,7,15,17,90};
  int size = 12;
  int x = getLargestPossibleScore(a, size);
  
  if(x == 148)
    return true;
  return false;
}

bool performTestCases(void)
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

  result = test4();
  if(!result)
  {
    printf("Test 4 failed.\n");
    return;
  }
  else
  {
    printf("Test 4 passed.\n");
  }

  result = test5();
  if(!result)
  {
    printf("Test 5 failed.\n");
    return;
  }
  else
  {
    printf("Test 5 passed.\n");
  }

  result = test6();
  if(!result)
  {
    printf("Test 6 failed.\n");
    return;
  }
  else
  {
    printf("Test 6 passed.\n");
  }

  result = test7();
  if(!result)
  {
    printf("Test 7 failed.\n");
    return;
  }
  else
  {
    printf("Test 7 passed.\n");
  }

  result = test8();
  if(!result)
  {
    printf("Test 8 failed.\n");
    return;
  }
  else
  {
    printf("Test 8 passed.\n");
  }

  return;
}

int main()
{
  performTestCases();

  return 0;
}
