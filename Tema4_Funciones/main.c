#include <stdio.h>

// Declaración de funciones
void imprimirHola();
int sumar(int a, int b);
int multiplicar(int a, int b);

int tema4Funciones() {
    // Llamada a la función sin retorno
    imprimirHola();

    // Llamada a funciones con parámetros y retorno
    int num1, num2;
    printf("Introduce dos numeros: ");
    scanf("%d %d", &num1, &num2);

    int suma = sumar(num1, num2);
    int producto = multiplicar(num1, num2);

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    printf("El producto de %d y %d es: %d\n", num1, num2, producto);

    return 0;
}

// Definición de funciones
void imprimirHola() {
    printf("¡Hola, mundo!\n");
}

int sumar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}
