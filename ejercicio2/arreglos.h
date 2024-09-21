/*
 * Trabajo Practico 5
 * Ejercicio 2 - Arreglos III
 * Felipe Outeiral - Blizard32
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision II
 */

#ifndef ARREGLOS_H // Un detalle importante con las guardas
#define ARREGLOS_H // Su nombre debe ser único a cada archivo

/**
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @return Deja el arreglo con los datos ingresados
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
int cargar_arreglo(int capacidad, int arreglo[]);

/**
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param execute Realiza stdout en cada posicion del arreglo
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
void muestra_arreglo(int capacidad, int arreglo[]);

/**
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param return Devuelve la suma de todos los valores del arreglo
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
int suma_arreglo(int capacidad, int arreglo[]);

/**
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param return Devuelve el promedio de los valores del arreglo
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
float promedio_arreglo(int capacidad, int arreglo[]);

/**
 * Retorna el valor minimo del arreglo
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param return Devuelve el valor del menor dato dentro del arreglo
 * 
 * --------------------------------------------------
 * 
 * Precondición: La capacidad debe ser mayor a 0 y menor al limite del arreglo
 * 
 * Postcondición: El dato debe estar dentrto del arreglo
 */
int valor_minimo(int capacidad, int arreglo[]);

/**
 * Retorna el valor maximo del arreglo
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param return Devuelve el valor del menor dato dentro del arreglo
 * 
 * --------------------------------------------------
 * 
 * Precondición: La capacidad debe ser mayor a 0 y menor al limite del arreglo
 * 
 * Postcondición: El dato debe estar dentrto del arreglo
 */
int valor_maximo(int capacidad, int arreglo[]);

/**
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param return Devuelve la posicion del valor más alto (de 0 a n-1)
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 * 
 * Postcondición: La posicion debe ser >0 y <cantidad.
 *            Si no cumple la precondicion, se retorna -1
 */
int posicion_maximo(int capacidad, int arreglo[]);

/**
 * Se obtiene el mínimo, máximo, suma y promedio del arreglo y se guarda en las DM (direccion de memoria) correspondiente
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * @param maximo Variable donde agendar el máximo
 * @param minimo Variable donde agendar el mínimo
 * @param promedio Variable donde agendar el promedio
 * @param suma Variable donde agendar la suma del vector
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 * Realiza los cambios en cada parametrto mediante pruntero
 */
void estadistica(int capacidad, int arreglo[], int *maximo, int *minimo, float *promedio, int *suma);

/**
 * Ordena el arreglo utilizando una funcion auxiliar de <intercambiar valor>
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
void ordenar(int capacidad, int arreglo[]);

/**
 * Intercambia los valores de dos direcciones de memoria (DM)
 * 
 * @param izquierda DM del valor que esta a la derecha
 * @param derecha DM del otro valor a intercambiar
 */
void intercambia(int* izquierda, int* derecha);

/**
 * Devuelve la direccion de memoria del valor máximo del arreglo
 * 
 * @param capacidad Es el limite a utilizar (mayor a 0)
 * @param arreglo Arreglo a modificar
 * 
 * --------------------------------------------------
 * 
 * Precondición: la capacidad debe ser mayor a 0 y menor al limite del arreglo
 */
int* posicion_maximo_ptr(int capacidad, int arreglo[]);

#endif
