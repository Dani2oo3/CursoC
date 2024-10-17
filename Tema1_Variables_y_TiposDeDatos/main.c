#include <stdio.h>

int tema1VariablesYTiposDatos(void)
{
     // Declaración de variables
    int numeroEntero = 10;           // Variable de tipo entero
    float numeroDecimal = 3.14;      // Variable de tipo flotante
    double numeroGrande = 3.14159;    // Variable de tipo doble (mayor precisión)
    char letra = 'A';                 // Variable de tipo carácter
    int resultado;                    // Variable para almacenar resultados de operaciones

    // Imprimir los valores iniciales de las variables
    printf("Valores iniciales:\n");
    printf("Numero entero: %d\n", numeroEntero);
    printf("Numero decimal: %.2f\n", numeroDecimal);  // %.2f para imprimir 2 decimales
    printf("Numero grande: %.5f\n", numeroGrande);    // %.5f para imprimir 5 decimales
    printf("Letra: %c\n\n", letra);

    // Cambiar los valores de las variables
    numeroEntero = 20;
    numeroDecimal = 2.718;
    letra = 'B';

    // Imprimir los nuevos valores
    printf("Nuevos valores:\n");
    printf("Numero entero: %d\n", numeroEntero);
    printf("Numero decimal: %.3f\n", numeroDecimal);  // %.3f para imprimir 3 decimales
    printf("Letra: %c\n\n", letra);

    // Ejemplo de operaciones aritméticas
    int a = 10;
    int b = 5;

    // Sumar dos números
    resultado = a + b;
    printf("La suma de %d y %d es: %d\n", a, b, resultado);

    // Restar dos números
    resultado = a - b;
    printf("La resta de %d y %d es: %d\n", a, b, resultado);

    // Multiplicar dos números
    resultado = a * b;
    printf("La multiplicacion de %d y %d es: %d\n", a, b, resultado);

    // Dividir dos números
    if (b != 0) {  // Comprobación de división por cero
        float division = (float)a / b;  // Casting a float para obtener un resultado decimal
        printf("La division de %d entre %d es: %.2f\n", a, b, division);
    } else {
        printf("Error: División por cero no permitida.\n");
    }

    // Imprimir el tamaño de cada tipo de variable
    printf("\nTamanos de tipos de datos:\n");
    printf("Tamano de un int: %lu bytes\n", sizeof(int));     // Tamaño de entero
    printf("Tamano de un float: %lu bytes\n", sizeof(float)); // Tamaño de flotante
    printf("Tamano de un double: %lu bytes\n", sizeof(double)); // Tamaño de doble
    printf("Tamano de un char: %lu bytes\n", sizeof(char));   // Tamaño de carácter

    return 0;  // Fin del programa
}
