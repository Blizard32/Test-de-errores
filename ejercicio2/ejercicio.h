/*
 * Trabajo Practico 5
 * Ejercicio 2 - Arreglos III
 * Felipe Outeiral - Blizard32
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024 - comision II
 */

#ifndef EJERCICIO_H // Un detalle importante con las guardas
#define EJERCICIO_H // Su nombre debe ser único a cada archivo

/**
 * Crea un arreglo sin inicializar con un tamaño dado.
 *
 * @param size tamaño que le asignaremos al vector
 * @return devuelve el arreglo
 * 
 * -----------------------------------------
 * 
 * Postcondiciones:
 * El puntero obtiene una direccion en el heder con el tamaño definido
 */
int* crear_arreglo_sin_inicializar(int size);

/**
 * Crea un arreglo inicializado en 0 con un tamaño dado.
 *
 * @param size tamaño que le asignaremos al vector
 * @return devuelve el arreglo
 * 
 * -----------------------------------------
 * 
 * Postcondiciones:
 * El puntero obtiene una direccion en el heder con el tamaño definido
 */
int* crear_arreglo_inicializado_en_0(int size);

/**
 * Crea un arreglo inicializado con un valor específico con un tamaño dado.
 *
 * @param valor_inicializacion numero en el cuál queremos inicializar el vector
 * @param size tamaño que le asignaremos al vector
 * @return devuelve el arreglo
 * 
 * -----------------------------------------
 * 
 * Postcondiciones:
 * El puntero obtiene una direccion en el heder con el tamaño definido
 */
int* crear_arreglo_con_valor(int size, int valor_inicializacion);

/**
 * Crea un arreglo inicializado con un vector menor con un tamaño dado.
 *
 * @param vector_inicializacion numero en el cuál queremos inicializar el vector
 * @param size tamaño que le asignaremos al vector
 * @return devuelve el arreglo
 * 
 * -----------------------------------------
 * 
 * Precondiciones:
 * El vector pasado debe tener dimension menor al size
 * 
 * Postcondiciones:
 * El puntero obtiene una direccion en el heder con el tamaño definido
 */
int* crear_arreglo_con_vector(int size, int size_auxiliar, int vector_inicializacion[]);

/**
 * Crea un arreglo sin inicializar con un tamaño dado.
 *
 * @param size tamaño que le asignaremos al vector
 * 
 * -----------------------------------------
 * 
 * Precondición:
 * El vector debe haberse inicializado/creado con malloc
 */
void liberar_arreglo(int size, int* vector);

/**
 * Duplica un arreglo y lo aloca en la memoria dinamica
 *
 * @param vector es el arreglo al cuál queremos copiar
 * @param size tamaño del arreglo pasado por parametro
 * @return devuelve el arreglo duplicado
 * 
 * -----------------------------------------
 * 
 * Precondición:
 *  el tamaño debe estar dentro de los parametros del arreglo
 */
int* duplicar(int size, int vector[]);

/**
 * Fusiona ambos arreglos y devuelve un arreglo dinámico con ambos
 *
 * @param vec1 uno de los arreglos a fusionar
 * @param size1 tamaño del arreglo pasado por parametro
 * @param vec2 el otro arreglo a fusionar
 * @param size2 tamaño del arreglo pasado por parametro
 * @return devuelve ambos arreglos
 * 
 * -----------------------------------------
 * 
 * Precondición:
 *  los tamaños deben estar dentro de los parametros del los arreglos
 * 
 * Postcondición:
 *  el tamaño del arreglo fusionado debe ser la suma de ambos tamaños
 */
int* fusion(int size1, int vec1[], int size2, int vec2[]);

/**
 * Duplica un arreglo filtrando un numero y lo devuelve alocado en el heap 
 *
 * @param vector es el arreglo al cuál queremos copiar
 * @param size tamaño del arreglo pasado por parametro
 * @param filtar numero al cuál queremos quitar
 * @return devuelve el arreglo sin el numero filtrado
 * 
 * -----------------------------------------
 * 
 * Precondición:
 *  el tamaño debe estar dentro de los parametros del arreglo
 */
int* filtro(int* size, int vector[], int filtrar);

/**
 * Duplica un arreglo filtrando un numero y lo devuelve alocado en el heap 
 *
 * @param vector es el arreglo al cuál queremos copiar
 * @param size tamaño del arreglo pasado por parametro
 * @param agregar numero que queremos agregar
 * @param posicion posicion que queremos agregar el numero
 * @return devuelve el arreglo con el numero agregado y el tamaño aumentado
 * 
 * -----------------------------------------
 * 
 * Precondición:
 *  el tamaño debe estar dentro de los parametros del arreglo
 */
int* insercion(int* size, int vector[], int agregar, int posicion);

/**
 * Duplica un arreglo filtrando un numero y lo devuelve alocado en el heap 
 *
 * @param vector es el arreglo al cuál queremos copiar
 * @param size tamaño del arreglo pasado por parametro
 * @param posicion posicion que queremos quitar
 * @return devuelve el arreglo sin la posicion que quitamos
 * 
 * -----------------------------------------
 * 
 * Precondición:
 *  el tamaño debe estar dentro de los parametros del arreglo
 */
int* remocion(int* size, int vector[], int posicion);

#endif
