cmake_minimum_required(VERSION 3.29)
project(CursoC C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CursoC
    Tema1_Variables_y_TiposDeDatos/main.c
    Tema2_Operadores/main.c
    Tema3_EstructurasControl/main.c
    Tema4_Funciones/main.c
    Tema5_Arrays/main.c
    Tema6_CadenaCaracteres/main.c
    Tema7_Punteros/main.c
    Tema8_Estructuras/main.c
    Tema9_Archivos/
    Tema10_MemoriaDinamica/main.c
    Tema11_Recursividad/main.c
    Tema12_LibreriasEstandar/main.c
        main.c)
