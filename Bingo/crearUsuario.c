#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
#include "jugador.h"

void crearUsuario(PtrLista listaUsuarios, PtrLista listaCartones){
    char* nombre=(char*)malloc(sizeof(char)*70);
    char* dni=(char*)malloc(sizeof(char)*10);
    printf("Ingrese el nombre y apellido del usuario: ");
    scanf("%s",nombre);
    while (getchar() != '\n');
    printf("Ingrese el DNI del usuario: ");
    scanf("%s",dni);
    while (getchar() != '\n');
    int cartonElegido;
    for(int i=0; i<longitudLista(listaCartones);i++){
        printf("%d",i+1);
        mostrarCarton(getDatoLista(listaCartones,i));
        printf("\n");
    }
    printf("Elija un carton: ");
    scanf("%d",&cartonElegido);
    cartonElegido--;
    jugadorPtr jugador1=crearJugador(nombre,dni,getDatoLista(listaCartones,cartonElegido));
    agregarDatoLista(listaUsuarios,jugador1);
}
