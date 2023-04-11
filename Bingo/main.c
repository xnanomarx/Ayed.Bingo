#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "listas.h"
#include "Agencia.h"

int main()
{

    PtrLista listaAgencias=crearLista();
    PtrLista listaCartones=crearLista();
    PtrLista listaUsuarios=crearLista();
    crearAgencias(listaAgencias);
    int seleccionar=1;
    int queAgencia;
    for(int i=0; i<longitudLista(listaAgencias);i++){
        printf("--- Agencia %d ---\n",i+1);
        mostrarAgencia(getDatoLista(listaAgencias,i));
        printf("\n");
    }
    printf("Seleccione una agencia para jugar: ");
    scanf("%d",&queAgencia);
    queAgencia--;

    agenciaPtr agencia1=crearAgencia(getNombreAgencia(getDatoLista(listaAgencias,queAgencia)),getDireccionAgencia(getDatoLista(listaAgencias,queAgencia)));
    system("cls");

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
            jugada20nums(getCartonJugador(getDatoLista(listaUsuarios, 0)));
            system("cls");
            break;
        case 2:
            system("cls");
            comprarCarton(listaCartones,agencia1);
            system("cls");
            break;
        case 3:
            system("cls");
            crearUsuario(listaUsuarios,listaCartones);
            system("cls");
            break;
        case 4:
            system("cls");
            verCarton(listaUsuarios);
            system("cls");
            break;
        case 5:
            system("cls");
            jugarHastaGanar(getCartonJugador(getDatoLista(listaUsuarios,0)));
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
