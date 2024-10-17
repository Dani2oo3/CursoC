#include <stdio.h>
#include <string.h>

int tema6CadenaCaracteres() {
    // Declaración e inicialización de una cadena
    char saludo[20] = "Hola";

    // Imprimir la cadena
    printf("Cadena original: %s\n", saludo);

    // Longitud de la cadena
    int longitud = strlen(saludo);
    printf("Longitud de la cadena: %d\n", longitud);

    // Copiar una cadena
    char otraCadena[20];
    strcpy(otraCadena, saludo);
    printf("Cadena copiada: %s\n", otraCadena);

    // Concatenar cadenas
    strcat(otraCadena, " Mundo");
    printf("Cadena concatenada: %s\n", otraCadena);

    // Comparar cadenas
    if (strcmp(saludo, otraCadena) == 0) { // 0 si son iguales
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    // Subcadena
    char subcadena[20];
    strncpy(subcadena, otraCadena, 4); // Copiar los primeros 4 caracteres
    subcadena[4] = '\0'; // Añadir el carácter nulo
    printf("Subcadena: %s\n", subcadena);

    return 0;
}

