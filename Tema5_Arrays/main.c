#include <stdio.h>

int tema5Arrays(void)
{
    // Declaración e inicialización del array
    int numeros[5] = {1, 2, 3, 4, 5}; //numeros[5] indica la longitud del array

    // Imprimir los elementos del array
    for (int i = 0; i < 5; i++) {
        printf("Elementos en numeros[%d]: %d\n", i, numeros[i]);
    }

    // Modificar un elemento
    numeros[2] = 10; // Cambia el tercer elemento a 10
    printf("Elemento modificado en numeros[2]: %d\n", numeros[2]);

    // Calcular y mostrar la longitud del array
    int longitud = sizeof(numeros); // Devuelve el tamaño en bytes
    int longitud2 = sizeof(numeros) / sizeof(numeros[0]); // Devuelve el número de elementos
    printf("La longitud del array en bytes es: %d\n", longitud);
    printf("La longitud del array en elementos es: %d\n", longitud2);

    //arrays multidimensionales
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}}; // matriz[2][3] indica 2 filas y 3 columnas
    printf("Elemento en matriz[1][2]: %d\n", matriz[1][2]); // Imprime el elemento en la segunda F y tercera C
    return 0;

}
