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
  int x = 4;
  int y = 3;
  int m = max(x, y);

  if(m == 4)
    return true;
  return false;
}

bool test2(void)
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

bool test3(void)
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

bool test4(void)
{
  int a[] = {8, 15, 3, 7};
  int size = 4;
  int x = getLargestPossibleScore(a, size);

  if(x == 22)
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

  return;
}

int main()
{
  performTestCases();

  return 0;
}
