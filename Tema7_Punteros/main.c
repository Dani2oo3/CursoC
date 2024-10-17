#include <stdio.h>

int tema7Punteros(void)
{
    // Declaración e inicialización de una variable
    int a = 5;

    // Declaración de un puntero y asignación de la dirección de 'a'
    int *p = &a; // p apunta a la dirección de 'a'

    // Imprimir el valor de 'a' a través del puntero
    printf("Valor de a: %d\n", *p); // Imprime 5

    // Modificar el valor de 'a' usando el puntero
    *p = 10; // Cambia el valor de 'a' a 10
    printf("Valor modificado de a: %d\n", a); // Imprime 10

    // Mostrar la dirección de 'a'
    printf("Direccion de a: %p\n", (void*)&a);
    printf("Direccion almacenada en p: %p\n", (void*)p); // Debería ser la misma que la dirección de 'a'

    // Punteros a punteros
    int **pp; // Declaración de un puntero a un puntero
    pp = &p;  // pp apunta al puntero p

    // Imprimir el valor de a a través del puntero a puntero
    printf("Valor de a a traves del puntero a puntero: %d\n", **pp); // Imprime 10

    // Arreglo y punteros
    int arr[5] = {1, 2, 3, 4, 5}; // Declaración e inicialización de un arreglo
    int *ptr = arr; // ptr apunta al primer elemento de arr

    // Imprimir los elementos del arreglo usando punteros
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, *(ptr + i)); // Acceso a elementos del arreglo usando puntero
    }

    // Ejemplo de puntero nulo
    int *nullPointer = NULL; // Inicializa un puntero a NULL
    if (nullPointer == NULL) {
        printf("El puntero es nulo.\n");
    }

    return 0;
}
