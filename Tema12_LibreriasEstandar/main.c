#include <stdio.h>    // Para entrada/salida estándar
#include <stdlib.h>   // Para funciones de memoria y conversión
#include <string.h>   // Para manipulación de cadenas
#include <math.h>     // Para funciones matemáticas
#include <time.h>     // Para funciones de tiempo

int tema12LibreriasEstandar(void)
{
    // Uso de <stdio.h>
    printf("Introduce un numero: ");
    int num;
    scanf("%d", &num);
    printf(num % 2 == 0 ? "El numero es par\n" : "El numero es impar\n");

    // Uso de <math.h>
    double raiz = sqrt(num);
    printf("La raiz cuadrada de %d es %.2f\n", num, raiz);

    // Uso de <stdlib.h>
    char str[10];
    itoa(num, str, 10); // Convertir entero a cadena (no estándar, se puede usar sprintf)
    printf("El numero como cadena es: %s\n", str);

    // Uso de <string.h>
    char texto[20] = "Hola ";
    strcat(texto, "mundo!"); // Concatenar cadenas
    printf("%s\n", texto);

    // Uso de <time.h>
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("La fecha y hora actual es: %s", asctime(tm));

    return 0;
}
