#include <stdio.h>

int tema3EstructurasControl() {
    // Ejemplo 1: Uso de if y else
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("El numero es positivo.\n");
    } else if (num < 0) {
        printf("El numero es negativo.\n");
    } else {
        printf("El numero es cero.\n");
    }

    //if(condicion){
    //    // Codigo si la condicion es verdadera
    //} else {
    //    // Codigo si la condicion es falsa
    //}


    // Ejemplo 2: Uso de switch
    int dia;
    printf("Introduce un numero del 1 al 7 para el dia de la semana: ");
    scanf("%d", &dia);

    switch (dia) {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    case 3:
        printf("Miercoles\n");
        break;
    case 4:
        printf("Jueves\n");
        break;
    case 5:
        printf("Viernes\n");
        break;
    case 6:
        printf("Sabado\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
        printf("Numero no válido.\n");
    }

    //switch(expresion){
    //    case valor1:
    //        // Codigo si la expresion es igual a valor1
    //        break;
    //    case valor2:
    //        // Codigo si la expresion es igual a valor2
    //        break;
    //    ...
    //    default:
    //        // Codigo si la expresion no coincide con ningun valor
    //        break;
    //}

    // Ejemplo 3: Uso de for
    printf("Numeros del 1 al 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    //for(inicializacion; condicion; incremento){
    //    // Codigo que se ejecuta en cada iteracion
    //}

    // Ejemplo 4: Uso de while
    int count = 10;
    printf("Contando hacia atras:\n");
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    //while(condicion){
    //    // Codigo que se ejecuta mientras la condicion sea verdadera
    //}

    // Ejemplo 5: Uso de do-while
    int num2;
    do {
        printf("Introduce un numero mayor que 10: ");
        scanf("%d", &num2);
    } while (num2 <= 10);

    //do{
    //    // Codigo que se ejecuta al menos una vez
    //} while(condicion);

    return 0;
}
