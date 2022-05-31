#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    // f: futbol, b: basket, t: tenis, p: padel, w: bowling
    char tipo;
    // por hora
    int precio;
    // 2: si está rota, 1: si esta ocupada, 0: si no esta libre
    int estado;
    int capacidad;
} cancha;

typedef struct {
    char apellido[20];
    // id único
    int dni;
    int telefono;
} cliente;

