#include <stdio.h>
#include <string.h>

// Definición de la estructura Persona
struct Persona {
    char nombre[50]; // Cadena de caracteres un maximo de 50 caracteres
    int edad;
    float altura;
};

int tema8Estructuras(void)
{
    // Declaración de una variable de tipo Persona
    struct Persona p1;

    // Asignación de valores a los miembros de la estructura
    strcpy(p1.nombre, "Ana");
    p1.edad = 30;
    p1.altura = 1.65;

    // Imprimir los valores de p1
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %d\n", p1.edad);
    printf("Altura: %.2f\n", p1.altura);

    // Inicialización de otra estructura
    struct Persona p2 = {"Juan", 25, 1.80};

    // Imprimir los valores de p2
    printf("\nNombre: %s\n", p2.nombre);
    printf("Edad: %d\n", p2.edad);
    printf("Altura: %.2f\n", p2.altura);

    // Usar puntero a estructura
    struct Persona *ptr = &p1;
    ptr->edad = 28; // Cambia la edad de p1 a 28
    printf("\nEdad modificada de p1 a traves del puntero: %d\n", p1.edad);

    // Imprimir los valores de p1
    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %d\n", p1.edad);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}
