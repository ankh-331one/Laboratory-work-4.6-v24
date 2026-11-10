/*
 * Лабораторная 4.6 Формирование массива
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
#include <stdio.h>
#include "p_function.h"

input('A', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
mass_input(in_A, na, &A);
input('B', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
mass_input(in_B, nb, &B);
input('C', L_DIAPAZON_MASSIV, R_DIAPAZON_MASSIV);
mass_input(in_C, nc, &C);
mass_print(out_file, 'A', na, A);
mass_print(out_file, 'B', nb, B);
mass_print(out_file, 'C', nc, C);
mass_vvod_poick(%new_na, &new_A, na, &A, krat, ne_krat);
mass_vvod_poick(%new_nb, &new_B, nb, &B, krat, ne_krat);
mass_vvod_poick(%new_nc, &new_C, nc, &C, krat, ne_krat);
mass_print(out_file, 'A', new_na, new_A);
mass_print(out_file, 'B', new_nb, new_B);
mass_print(out_file, 'C', new_nc, new_C);