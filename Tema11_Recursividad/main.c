#include <stdio.h>

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n == 0) { // Caso base
        return 1;
    } else { // Caso recursivo
        return n * factorial(n - 1);
    }
}

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) { // Caso base
        return 0;
    } else if (n == 1) { // Otro caso base
        return 1;
    } else { // Caso recursivo
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int tema11Recursividad() {
    int num;

    // Calcular el factorial
    printf("Introduce un numero para calcular su factorial: ");
    scanf("%d", &num);
    printf("El factorial de %d es %d\n", num, factorial(num));

    // Calcular el número de Fibonacci
    printf("Introduce un numero para calcular el n-esimo numero de Fibonacci: ");
    scanf("%d", &num);
    printf("El numero de Fibonacci en la posición %d es %d\n", num, fibonacci(num));

    return 0;
}

/*
La recursividad es una técnica de programación en la que una función se llama a sí misma para resolver un problema.
Esta técnica es útil cuando un problema puede dividirse en subproblemas más pequeños,
y permite escribir soluciones más limpias y elegantes.

Consideraciones:
1. Rendimiento: Las funciones recursivas pueden ser menos eficientes que las iterativas debido
a la sobrecarga de la pila de llamadas y el uso de memoria.

2. Límite de Recursión: C tiene un límite en la profundidad de la recursión,
y si se excede, puede provocar un desbordamiento de la pila.

3. Optimización: En algunos casos, la recursión puede ser optimizada mediante técnicas como la memoización,
que almacena los resultados de llamadas anteriores para evitar cálculos redundantes.
*/
