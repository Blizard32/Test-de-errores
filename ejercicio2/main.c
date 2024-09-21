/*
 * Trabajo Practico 5
 * Ejercicio 2 - Arreglos III
 * Felipe Outeiral - Blizard32
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision II
 */

#include "arreglos.h"
#include "ejercicio.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejercicio 1\n");
    int size = 9;
    int vector[9] = {5, 7, 3, 12, 35, 12, 0, 14, 32};
    int * vector_filtrado = filtro(&size, vector, 12);
    muestra_arreglo(size, vector_filtrado);
    printf("Finalizado\n");
    
    return 0;
}
