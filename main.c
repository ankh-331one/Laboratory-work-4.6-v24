/*
 * Лабораторная 4.6 Формирование массива
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
/**
Даны три одномерных массива А, В и С разного размера, для каждого из
которых сформировать новый массив из элементов исходного массива,
удовлетворяющих заданному условию. Выбрать подходящий тип элементов
массива. Для обработки массива (или пары массивов) использовать
подпрограмму. Результатом этой подпрограммы должен быть новый массив, а
также количество элементов в нем. Предусмотреть случай, когда
формируемый массив будет пустой. Для ввода и вывода массивов также
использовать подпрограммы. Составить тесты, позволяющие проверить все
возможные случаи.

24. Для каждого из этих массивов сформировать массив, содержащий номера
элементов исходного массива, которые кратны одному заданному числу и
не кратны другому заданному числу. Для формирования массива из
номеров элементов, удовлетворяющих условию, использовать
подпрограмму.
*/
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include "p_function.h"

#define L_DIAPAZON_MASSIV 1
#define R_DIAPAZON_MASSIV 99

int main(void){
    setlocale(0,"");
    setlocale(LC_NUMERIC, "C");
    
    FILE* out_file = fopen("output.txt", "a");
    fprintf(out_file, "4.6 запуск %s %s", __DATE__, __TIME__);
    fprintf(out_file, "\n-----------------------------------------------------------------\n");
    
    FILE* in_A = fopen("input_A.txt", "r");
    int na = input('A', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* A;
    mass_input(in_A, na, &A);
    fclose(in_A);
    
    FILE* in_B = fopen("input_B.txt", "r");
    int nb = input('B', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* B;
    mass_input(in_B, nb, &B);
    fclose(in_B);
    
    FILE* in_C = fopen("input_C.txt", "r");
    int nc = input('C', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* C;
    mass_input(in_C, nc, &C);
    fclose(in_C);
    
    int krat, ne_krat;
    do{
        printf("vvedite krat: ");
        scanf("%d", &krat);
        
        printf("vvedite ne_krat: ");
        scanf("%d", &ne_krat);
        
        if (krat == 0 || ne_krat == 0){
            printf("error");
        }
    }while (krat == 0 || ne_krat == 0);
    
    mass_print('A', na, A);
    mass_print('B', nb, B);
    mass_print('C', nc, C);
    fprintf(out_file, "vvedeno krat: %d", krat);
    fprintf(out_file, "ne_krat", ne_krat);
    
    
    
    free(A);
    free(B);
    free(C);
    fclose(out_file);
    return 0;
}

