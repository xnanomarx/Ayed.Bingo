#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listas.h"

int main()
{

    PtrLista listaAgencias=crearLista();
    crearAgencias(listaAgencias);
    int seleccionar=1;

    while(seleccionar!=0){
        printf("1. Jugar\n");
        printf("2. Comprar carton\n");
        printf("3. Crear usuario\n");
        printf("4. Ver tu carton\n");
        printf("5. Cuantas veces tuve que jugar para ganar\n");
        printf("0. Salir\n\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &seleccionar);
        switch(seleccionar){
        case 1:
            system("cls");
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cls");
            break;
        case 4:
            system("cls");
            break;
        case 5:
            system("cls");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("Seleccione una opcion valida\n");
            printf("Por favor espere...");
            sleep(2);
            system("cls");
            break;
        }
    }


    return 0;
}
