/*

Author: Grant Broadwater
Date: November 15, 2016

*/

#ifndef FUNCTIOINS_H
#define FUNCTIONS_H

#include <stdio.h>

int sum(const int* a, const int start, const int end);

int max(const int x, const int y);

int getLargestPossibleScore(const int* a, int** table,
                            const int i, const int j);

#endif
