/*
 * Лабораторная 4.6 Формирование массива
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
#ifndef P_FUNCTION.H
#define P_FUNCTION.H

#include <stdio.h>

int input(char a, int l_diapazon, int r_diapazon);
void mass_input(FILE* input, int n, int* *X);
void mass_print(FILE* output, char a, int n, int* X);
void mass_vvod_poick(int new_n, int* *new_X, int n, int* *X, int kr, int ne_kr);

#endif