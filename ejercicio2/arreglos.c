/*
 * Trabajo Practico 5
 * Ejercicio 2 - Arreglos III
 * Felipe Outeiral - Blizard32
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision II
 */

#include <stdio.h>
#include <stdlib.h>
#include "arreglos.h"

int cargar_arreglo(int capacidad, int arreglo[])
{
    if(capacidad > 0)
    {
        int valor = 0;
        for(int i=0; i<capacidad; i++)
        {
            printf("Ingresar posicion %d del arreglo: ", i+1);
            scanf("%d", &valor);
            arreglo[i] = valor;
            system("cls");
        }
    }
    return 1;
}

void muestra_arreglo(int capacidad, int arreglo[])
{
    for(int i=0; i<capacidad; i++)
    {
        printf("%d\t", arreglo[i]);
    }
    printf("\n");
}

int suma_arreglo(int capacidad, int arreglo[])
{
    int suma = 0;
    for(int i=0; i<capacidad; i++)
    {
        suma = suma + arreglo[i];
    }
    return suma;
}

float promedio_arreglo(int capacidad, int arreglo[])
{
    double promedio = 0;
    if(capacidad > 0)
    {
        int suma = suma_arreglo(capacidad, arreglo);
        promedio = (double)suma/capacidad;
    }
    return promedio;  
}

int valor_minimo(int capacidad, int arreglo[])
{
    int minimo = 99999;
    if(capacidad > 0)
    {
        for(int i=0; i<capacidad; i++)
        {
            if(arreglo[i] < minimo)
                minimo = arreglo[i];
        }
    }
    else
    {
        minimo = 0;
    }
    return minimo;
}

int valor_maximo(int capacidad, int arreglo[])
{
    int maximo = 0;
    if(capacidad > 0)
    {
        for(int i=0; i<capacidad; i++)
        {
            if(arreglo[i] > maximo)
                maximo = arreglo[i];
        }
    }
    else
    {
        maximo = 0;
    }
    return maximo;
}


int posicion_maximo(int capacidad, int arreglo[])
{
    int posicion = -1;
    int maximo = 0;
    for(int i=0; i<capacidad; i++)
    {
        if(arreglo[i] > maximo)
        {
            maximo = arreglo[i];
            posicion = i;
        }
    }
    return posicion;
}

void estadistica(int capacidad, int arreglo[], int *maximo, int *minimo, float *promedio, int *suma)
{
    *maximo = valor_maximo(capacidad, arreglo);
    *minimo = valor_minimo(capacidad, arreglo);
    *promedio = promedio_arreglo(capacidad, arreglo);
    *suma = suma_arreglo(capacidad, arreglo);
}

void intercambia(int* izquierda, int* derecha)
{
    int auxiliar = *izquierda;
    *izquierda = *derecha;
    *derecha = auxiliar;
}

void ordenar(int capacidad, int arreglo[])
{
    int lugar = 0;
    int posicion_cambio = 1;
    while(lugar < capacidad)
    {
        while(posicion_cambio < capacidad)
        {
            if(arreglo[posicion_cambio] < arreglo[lugar])
            {
                int pos_aux = posicion_cambio;
                while(pos_aux > lugar)
                {
                    intercambia(&arreglo[pos_aux - 1], &arreglo[pos_aux]);
                    pos_aux--;
                }
            }
            posicion_cambio++;
        }
        lugar++;
        posicion_cambio = lugar+1;
    }
}

int* posicion_maximo_ptr(int capacidad, int arreglo[])
{
    int *pos = NULL;
    int maximo = 0;
    for(int i=0; i<capacidad; i++)
    {
        if(arreglo[i] > maximo)
        {
            maximo = arreglo[i];
            pos = &arreglo[i];
        }
    }
    return pos;
}
