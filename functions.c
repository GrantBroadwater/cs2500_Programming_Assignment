/*

Author: Grant Broadwater
Date: November 15, 2016

*/

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
