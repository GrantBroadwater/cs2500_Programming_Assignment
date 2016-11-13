/*

  Author: Grant Broadwater
  Date: November 15, 2016

*/

#include "functions.h"

int max(const int x, const int y)
{
  return (x > y) ? x : y;
}

int min(const int x, const int y)
{
  return (x > y) ? y : x;
}

int calculateLargestPossibleScore(const int* a, int** table,
                            const int i, const int j)
{
  int m;
  int (*p)(const int*,int**,const int, const int) = &calculateLargestPossibleScore;

  if (i > j)
    return 0;

  if(table[i][j] == -1)
  {
    table[i][j] = max(
      a[i] + min((*p)(a, table, i+2, j),   (*p)(a, table, i+1, j-1)),
      a[j] + min((*p)(a, table, i+1, j-1), (*p)(a, table, i,   j-2))
    );
  }

  return table[i][j];
}

int getLargestPossibleScore(const int* a, const int size)
{
  int i, j;
  int** table;
  table = (int**)malloc(size * sizeof(int));
  for(i=0; i<size; i++)
  {
    table[i] = (int*)malloc(size * sizeof(int));
    for(j=0; j<size; j++)
      table[i][j] = -1;
  }

  return calculateLargestPossibleScore(a, table, 0, size-1);
}
