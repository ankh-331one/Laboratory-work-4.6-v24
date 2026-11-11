/*
 * Лабораторная 4.6 Формирование массива
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
#include "p_function.h"
#include <malloc.h>

int input(char a, int l_diapazon, int r_diapazon){
    int n;
    do{
        printf("vvedite %c: ", a);
        scanf("%d", &n);
        if (n < l_diapazon || n > r_diapazon){
            printf("error");
        }
    }while (n < l_diapazon || n > r_diapazon);
    return n;
}
void mass_input(FILE* input, int n, int* *X){
    (*X) = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        fscanf(input, "%d", &(*X)[i]);
    }
    return;
}
void mass_print(FILE* output, char a, int n, int* X){
    fprintf(output, "massiv %c: [ %d", a, X[0]);
    for (int i = 1; i < n; i++){
        fprintf(output, ", %d", X[i];
    }
    fprintf(output, " ]");
    return ;
}
void mass_vvod_poick(int new_n, int* *new_X, n, int* *X, int kr, int ne_kr);