#include <stdio.h>

int tema2Operadores() {
    // Declaración de variables
    int a = 10, b = 20;
    int suma, resta, multiplicacion, division, modulo;

    // Operadores aritméticos
    suma = a + b;                   // Suma
    resta = a - b;                  // Resta
    multiplicacion = a * b;         // Multiplicación
    division = b / a;               // División
    modulo = b % a;                 // Módulo

    // Mostrando resultados de operaciones aritméticas
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);
    printf("Módulo: %d\n", modulo);

    // Operadores de comparación
    printf("¿a es igual a b? %s\n", (a == b) ? "Sí" : "No");
    printf("¿a es diferente de b? %s\n", (a != b) ? "Sí" : "No");
    printf("¿a es mayor que b? %s\n", (a > b) ? "Sí" : "No");
    printf("¿a es menor que b? %s\n", (a < b) ? "Sí" : "No");

    // Operadores lógicos
    int x = 1, y = 0;
    printf("x && y: %d\n", x && y); // AND lógico
    printf("x || y: %d\n", x || y); // OR lógico
    printf("!x: %d\n", !x);          // NOT lógico

    // Operadores bit a bit
    int c = 5, d = 3; // 5: 0101, 3: 0011
    printf("c & d: %d\n", c & d); // AND bit a bit
    printf("c | d: %d\n", c | d); // OR bit a bit
    printf("c ^ d: %d\n", c ^ d); // XOR bit a bit
    printf("~c: %d\n", ~c);       // NOT bit a bit
    printf("c << 1: %d\n", c << 1); // Desplazamiento a la izquierda
    printf("c >> 1: %d\n", c >> 1); // Desplazamiento a la derecha

    // Operadores de asignación
    int e = 5;
    e += 2; // e = e + 2
    printf("Valor de e después de e += 2: %d\n", e);
    e -= 3; // e = e - 3
    printf("Valor de e después de e -= 3: %d\n", e);
    e *= 2; // e = e * 2
    printf("Valor de e después de e *= 2: %d\n", e);
    e /= 2; // e = e / 2
    printf("Valor de e después de e /= 2: %d\n", e);
    e %= 2; // e = e % 2
    printf("Valor de e después de e %%= 2: %d\n", e); // Doble % para imprimir

    return 0;
}
