#include <stdlib.h>
#include <stdio.h>
#include "Carton.h"
#include "jugador.h"
#include "listas.h"

void verCarton(PtrLista listaUsuarios){

    char buffer[256];

    for(int i=0;i<longitudLista(listaUsuarios);i++){
        printf("---- Jugador %d ----\n",i+1);
        mostrarJugador(getDatoLista(listaUsuarios,i));
        printf("\n");
        mostrarCarton(getCartonJugador(getDatoLista(listaUsuarios,i)));
        printf("\n");
    }
    fflush(stdout); // Limpia la salida de la consola antes de esperar la entrada
    printf("Presione Enter para continuar...");
    fflush(stdout); // Limpia la salida de la consola antes de esperar la entrada
    setbuf(stdin, NULL); // Desactiva el búfer de entrada estándar
    getchar();

}
