/*
 * Trabajo Practico 5
 * Ejercicio 2 - Arreglos III
 * Felipe Outeiral - Blizard32
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision II
 */
#include "ejercicio.h"
#include "arreglos.h"
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

int* test_crear_arreglo_1(char* mensaje, int size);
int* test_crear_arreglo_2(char* mensaje, int size);
int* test_crear_arreglo_3(char* mensaje, int size, int valor);
int* test_crear_arreglo_4(char* mensaje, int size, int vector[], int v_size);
int* test_duplicar(char* mensaje, int size, int vector[]);
int* test_fusionar(char* mensaje, int size1, int vector1[], int size2, int vector2[]);
int* test_filtro(char* mensaje, int* size, int vector[], int filtrar);
int* test_insercion(char* mensaje, int* size, int vector[], int num, int posicion);
int* test_remocion(char* mensaje, int* size, int vector[], int filtrar);

int main()
{
    printf("Probando ...\n");
    int* vector = NULL;
    int size = 15;
    vector = test_crear_arreglo_1("Se aloca 15 lugares de memoria", size);
    liberar_arreglo(size, vector);

    vector = test_crear_arreglo_2("Se aloca 15 lugares seteados en 0", size);
    liberar_arreglo(size, vector);

    vector = test_crear_arreglo_3("Se aloca 15 lugares seteados en 4", size, 4);
    liberar_arreglo(size, vector);

    int vec_aux[9] = {5, 7, 3, 12, 35, 12, 0, 14, 32};
    vector = test_crear_arreglo_4("Se aloca 15 lugares en base al arreglo [5, 7, 3, 12, 35, 12, 0, 14, 32]", size, vec_aux, 9);
    liberar_arreglo(size, vector);

    vector = test_duplicar("Duplicando arreglo auxiliar", 9, vec_aux);
    muestra_arreglo(9, vector);
    liberar_arreglo(9, vector);

    int vec_fusion[6] = {2, 18, 20, 16, 11, 8};
    vector = test_fusionar("Fucionando [5, 7, 3, 12, 35, 12, 0, 14, 32] y [2, 18, 20, 16, 11, 8]", 9, vec_aux, 6, vec_fusion);
    muestra_arreglo(size, vector);
    liberar_arreglo(size, vector);

    // int size_aux = 9;
    // vector = test_filtro("Filtrando 12 en [5, 7, 3, 12, 35, 12, 0, 14, 32]", &size_aux, vec_aux, 12);
    // muestra_arreglo(size_aux, vector);
    // liberar_arreglo(size_aux, vector); // !Debug imprime "arreglo liberado"

    printf("\t>> FIN TEST");

    return 0;
}

int* test_crear_arreglo_1(char* mensaje, int size)
{
    printf("%s:", mensaje);
    int* puntero = crear_arreglo_sin_inicializar(size);
    if(puntero != NULL)
    {
        printf("OK\n\n");
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_crear_arreglo_2(char* mensaje, int size)
{
    printf("%s:", mensaje);
    int* puntero = crear_arreglo_inicializado_en_0(size);
    if(puntero != NULL)
    {
        int pos = 0;
        bool exito = true;
        while(pos < size)
        {
            if(puntero[pos] != 0)
            {
                exito = false;
            }
            pos++;
        }
        if(exito)
        {
            printf("OK\n\n");
        }
        else
        {
            printf("FAIL\n\n");    
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_crear_arreglo_3(char* mensaje, int size, int valor)
{
    printf("%s:", mensaje);
    int* puntero = crear_arreglo_con_valor(size, valor);
    if(puntero != NULL)
    {
        int pos = 0;
        bool exito = true;
        while(pos < size)
        {
            if(puntero[pos] != valor)
            {
                exito = false;
            }
            pos++;
        }
        if(exito)
        {
            printf("OK\n\n");
        }
        else
        {
            printf("FAIL\n\n");    
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_crear_arreglo_4(char* mensaje, int size, int vector[], int v_size)
{
    printf("%s:", mensaje);
    int* puntero = crear_arreglo_con_vector(size, v_size, vector);
    if(puntero != NULL)
    {
        int pos = 0;
        bool exito = true;
        while(pos < v_size)
        {
            if(puntero[pos] != vector[pos])
            {
                exito = false;
            }
            pos++;
        }
        if(exito)
        {
            printf("OK\n\n");
        }
        else
        {
            printf("FAIL\n\n");    
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_duplicar(char* mensaje, int size, int vector[])
{
    printf("%s:", mensaje);
    int* puntero = duplicar(size, vector);
    if(puntero != NULL)
    {
        int pos = 0;
        bool exito = true;
        while(pos < size)
        {
            if(puntero[pos] != vector[pos])
            {
                exito = false;
            }
            pos++;
        }
        if(exito)
        {
            printf("OK\n\n");
        }
        else
        {
            printf("FAIL\n\n");    
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_fusionar(char* mensaje, int size1, int vector1[], int size2, int vector2[])
{
    printf("%s:", mensaje);
    int* puntero = fusion(size1, vector1, size2, vector2);
    if(puntero != NULL)
    {
        int pos = 0;
        bool exito = true;
        while(pos < size1)
        {
            if(puntero[pos] != vector1[pos])
            {
                exito = false;
            }
            pos++;
        }
        int pos_aux = 0;
        while(pos_aux < size2)
        {
            if(puntero[pos] != vector2[pos_aux])
            {
                exito = false;
            }
            pos++;
            pos_aux++;
        }
        if(exito)
        {
            printf("OK\n\n");
        }
        else
        {
            printf("FAIL\n\n");    
        }
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_filtro(char* mensaje, int* size, int vector[], int filtrar)
{
    printf("%s:", mensaje);
    int* puntero = filtro(size, vector, filtrar);
    if(puntero != NULL)
    {
        printf("OK\n\n");
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_insercion(char* mensaje, int* size, int vector[], int num, int posicion)
{
    printf("%s:", mensaje);
    int* puntero = insercion(size, vector, num, posicion);
    if(puntero != NULL)
    {
        printf("OK\n\n");
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}

int* test_remocion(char* mensaje, int* size, int vector[], int filtrar)
{
    printf("%s:", mensaje);
    int* puntero = filtro(size, vector, filtrar);
    if(puntero != NULL)
    {
        printf("OK\n\n");
    }
    else
    {
        printf("FAIL\n\n");
    }
    return puntero;
}