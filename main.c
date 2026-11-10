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
    
    FILE* in_file = fopen("input.txt", "r");
    FILE* out_file = fopen("output.txt", "a");
    
    fprintf(out_file, "4.6 запуск %s %s", __DATE__, __TIME__);
    fprintf(out_file, "\n-----------------------------------------------------------------\n");
    
    int na = input('A', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* A;
    mass_input(in_file, na, &A);
    
    int nb = input('B', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* A;
    mass_input(in_file, na, &A);
    
    int na = input('A', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
    int* A;
    mass_input(in_file, na, &A);
    
    return 0;
}

