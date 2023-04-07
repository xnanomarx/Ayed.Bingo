#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

void crearUsuario(PtrLista listaUsuarios){
    char* nombre=(char*)malloc(sizeof(char)*70);
    char* dni=(char*)malloc(sizeof(char)*10);
    printf("Ingrese el nombre y apellido del usuario: ");
    scanf("%s",nombre);
    while (getchar() != '\n');
    printf("Ingrese el DNI del usuario: ");
    scanf("%s",dni);
    while (getchar() != '\n');
    //jugadorPtr jugador1=crearJugador(nombre,dni...);
}
