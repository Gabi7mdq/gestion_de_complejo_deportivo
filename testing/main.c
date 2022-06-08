#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>
#include <Windows.h>

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

// prints the menu and highlights the option selected passed by parameter
void print_menu(int option, int menu_number) {
    switch (menu_number) {
        case 1: // menu principal
        switch (option) {
            case 1:
            printf("  opcion 1\n");
            break;
            default:
            printf("opcion 1\n");
        }
        switch (option) {
            case 2:
            printf("  opcion 2\n");
            break;
            default:
            printf("opcion 2\n");
        }
        switch (option) {
            case 3:
            printf("  opcion 3\n");
            break;
            default:
            printf("opcion 3\n");
        }    
        switch (option) {
            case 4:
            printf("  opcion 4\n");
            break;
            default:
            printf("opcion 4\n");
        }
        switch (option) {
            case 5:
            printf("  opcion 5\n");
            break;
            default:
            printf("opcion 5\n");
        }
            switch (option) {
            case 6:
            printf("  Salir\n");
            break;
            default:
            printf("Salir\n");
        }
    }
    

}

void clrscr() {
    system("@cls||clear");
}

void menu(int menu_number) {
    bool run = true;
    int i = 1;
    while (run) {
        print_menu(i, menu_number);
        int c = getch();
        clrscr();
        switch (c) {
        case 72:
            if (i > 1) {i--;}
            break;
        case 80:
            if (i < 6) {i++;}
            break;
        case 48:
            run = false;
            break;
        case 13:
            switch (i) {
                case 1:
                printf("opcion 1 ejecutada\n");
                break;
                case 2:
                printf("opcion 2 ejecutada\n");
                break;
                case 3:
                printf("opcion 3 ejecutada\n");
                break;
                case 4:
                printf("opcion 4 ejecutada\n");
                break;
                case 5:
                printf("opcion 5 ejecutada\n");
                break;
                case 6:
                run = false;
                break;
            }
        }
    }
}

int main() {
    menu(1);
}