/*

Author: Grant Broadwater
Date: November 15, 2016

*/

#ifndef FUNCTIOINS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

int max(const int x, const int y);

int calculateLargestPossibleScore(const int* a, int** table,
                            const int i, const int j);

int getLargestPossibleScore(const int* a, const int size);

#endif
