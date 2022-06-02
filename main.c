#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// TODO: mover funciones a librerias

typedef struct {
    char tipo; // f5: futbol, b: basket, t: tenis, p: padel, s: squash
    int precio; // por 2 horas
    int capacidad;
} tipo_cancha;

typedef struct {
    int id;
    char tipo;
} cancha;

typedef struct {
    char apellido[20];
    int dni; // id único
    int telefono;
} cliente;

// un turno = 2 horas
typedef struct {
    int id_turno; // 1 = 10 a 12, 2 = 12 a 14, 3 = 14 a 16, 4 = 16 a 18, 5 = 18 a 20, 6 = 20 a 22
    int dia;
    int mes;
    int cancha_id;
    int cliente_id;
} turno;

// loads an tipo_cancha struct from console and returns it
tipo_cancha cargar_tipo_cancha() {
    tipo_cancha t;
    printf("Ingrese el tipo de cancha: ");
    fflush(stdin);
    scanf("%c", &t.tipo);
    printf("Ingrese el precio: ");
    scanf("%d", &t.precio);
    printf("Ingrese la capacidad: ");
    scanf("%d", &t.capacidad);
    return t;
}

// opens a file and saves canchas in an array
void cargar_canchas() {
    FILE *archivo;
    
    tipo_cancha c;
    for (int i = 0; i < 5; i++) {
        archivo = fopen("canchas.dat", "ab");
        fflush(stdin);
        c = cargar_tipo_cancha();
        fwrite(&c, sizeof(tipo_cancha), 1, archivo);
        fclose(archivo);
    }
}

// prints the file canchas.dat in the console
void mostrar_canchas() {
    FILE *archivo;
    archivo = fopen("canchas.dat", "rb");
    fseek(archivo, 0L, SEEK_END);
    int size = ftell(archivo);
    fseek(archivo, 0, SEEK_SET);
    tipo_cancha c[size];
    fread(&c, sizeof(cancha), size, archivo);
    for (int i = 0; i < 5; i++) {
        printf("Tipo de cancha: %c\n", c[i].tipo);
        printf("Precio de la cancha: %d\n", c[i].precio);
        printf("Capacidad de la cancha: %d\n", c[i].capacidad);
    }
    fclose(archivo);
}

// loads a cancha struct from console and returns it
cancha cargar_cancha() {
    cancha c;
    printf("Ingrese el tipo de cancha: ");
    fflush(stdin);
    scanf("%c", &c.tipo);
    printf("Ingrese el id de la cancha: ");
    scanf("%d", &c.id);
    printf("Ingrese el estado de la cancha: ");
    fflush(stdin);
    return c;
}

// MODULARIZAR

// cargar canchas en un archivo

// carga clientes solo cuando no estan en el archivo

// carga turnos solo cuando el horario no esta ocupado

// valida que el turno no este ocupado

// da de baja el turno

// muestra los turnos de un dia especifico enviado por parametro

// validar dias, meses y turnos

// hacer el menu


int main() {
    // cargar_canchas();
    mostrar_canchas();
}