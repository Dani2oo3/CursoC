#include <stdio.h>

int tema9Archivos(void)
{
    FILE *fp;

    // Escribir en un archivo
    fp = fopen("archivo.txt", "w"); // Abre archivo en modo escritura (debe existir)
    if (fp == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return 1;
    }
    fprintf(fp, "Hola, mundo!\n"); // Escribe una línea en el archivo
    fclose(fp); // Cierra el archivo

    // Leer de un archivo
    char buffer[100];
    fp = fopen("archivo.txt", "r"); // Abre archivo en modo lectura
    if (fp == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }
    fgets(buffer, sizeof(buffer), fp); // Lee una línea del archivo
    printf("Contenido del archivo: %s", buffer); // Imprime el contenido
    fclose(fp); // Cierra el archivo

    /*
"r": Lectura (el archivo debe existir).
"w": Escritura (crea un archivo nuevo o trunca uno existente).
"a": Añadir (agrega datos al final del archivo).
"b": Modo binario (se puede combinar con los anteriores, por ejemplo, "rb").

Lectura y Escritura de Archivos
Para leer y escribir datos en archivos, puedes usar varias funciones:

Lectura:
- fscanf(): Para leer datos formateados.
- fgets(): Para leer una línea completa de texto.

Escritura:
- fprintf(): Para escribir datos formateados.
- fputs(): Para escribir una cadena de caracteres.
*/

    return 0;
}
