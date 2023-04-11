#include <stdlib.h>
#include <stdio.h>
#include "comprarCarton.h"
#include "Carton.h"
#include "Agencia.h"
#include "listas.h"
#include <time.h>

 void comprarCarton(PtrLista listaCartones, agenciaPtr agencia){

    int seleccionar=1;
    int* numCarton=(int*)malloc(sizeof(int)*8);
    int numElegido;
    cartonPtr carton1;

    while(seleccionar!=0){
        printf("1. Comprar carton automatico\n");
        printf("2. Comprar carton eligiendo numeros\n");
        printf("0. Volver\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &seleccionar);
        switch(seleccionar){
        case 1:
            system("cls");
            printf("Creando carton automatico... Por favor espere\n");
            carton1=crearCartonAleatorio(agencia);
            sleep(2);
            printf("Carton creado con exito");
            sleep(2);
            system("cls");
            agregarDatoLista(listaCartones, carton1);
            break;
        case 2:
            system("cls");
            for(int i=0;i<8;i++){
                printf("Ingrese el numero %d: ", i+1);
                scanf("%d", &numElegido);
                numCarton[i]=numElegido;
            }
            cartonPtr carton2=crearCarton(numCarton, agencia);
            agregarDatoLista(listaCartones, carton2);
            system("cls");
            printf("Carton creado con exito");
            sleep(3);
            system("cls");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("Ingrese una opcion valida");
            sleep(2);
            system("cls");
            break;
        }
    }
 }
