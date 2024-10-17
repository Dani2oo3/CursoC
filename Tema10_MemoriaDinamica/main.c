#include <stdio.h>
#include <stdlib.h>

int tema10MemoriaDinamica() {
    int n;
    printf("Introduce el numero de elementos: ");
    scanf("%d", &n);

    // Asignar memoria dinámicamente
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1; // Salir si la asignación falla
    }

    // Inicializar el array
    for (int i = 0; i < n; i++) {
        printf("Introduce el elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Imprimir los elementos
    printf("Elementos en el array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Cambiar el tamaño del array
    int newSize;
    printf("Introduce el nuevo tamano del array: ");
    scanf("%d", &newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int)); // Cambiar tamaño
    if (arr == NULL) {
        printf("Error al cambiar el tamano de la memoria.\n");
        return 1; // Salir si la reasignación falla
    }

    // Inicializar nuevos elementos
    for (int i = n; i < newSize; i++) {
        printf("Introduce el nuevo elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Imprimir los elementos después de la re-asignación
    printf("Elementos en el array después de la re-asignacion:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberar memoria
    free(arr);

    /*
En C, puedes utilizar las siguientes funciones para asignar memoria en el heap:

malloc(): Asigna un bloque de memoria del tamaño especificado y devuelve un puntero al inicio de ese bloque.
calloc(): Similar a malloc(), pero también inicializa la memoria a cero. Se usa para asignar memoria para un array.
realloc(): Cambia el tamaño de un bloque de memoria previamente asignado.
free(): Libera un bloque de memoria que fue asignado previamente.
*/
    // el heap es una región de la memoria que se utiliza para almacenar datos de forma dinámica.

    return 0;
}
