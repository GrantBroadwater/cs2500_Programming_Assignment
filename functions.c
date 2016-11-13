/*

  Author: Grant Broadwater
  Date: November 15, 2016

*/

#include "functions.h"

int sum(const int* a, const int start, const int end)
{
  int i;
  int sum = 0;

  for(i=start; i<=end; i++)
    sum += a[i];

  return sum;
}

int max(const int x, const int y)
{
  return (x > y) ? x : y;
}

int calculateLargestPossibleScore(const int* a, int** table,
                            const int i, const int j)
{
  int s;
  int m;

  if (i > j)
    return 0;

  if(table[i][j] == -1)
  {
   s = sum(a, i, j);

    table[i][j] = max( (s - calculateLargestPossibleScore(a, table, i+1, j)),
                       (s - calculateLargestPossibleScore(a, table, i, j-1)) );
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
