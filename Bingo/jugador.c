#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "jugador.h"

jugadorPtr crearJugador(char* nombre, char* dni /*,cartonPtr cartonjugador*/){
    jugadorPtr jugador1=(jugadorPtr)malloc(sizeof(jugador));
    jugador1->nombre=crearStringDinamico(nombre);
    jugador1->dni=crearStringDinamico(dni);
    //jugador1->cartonJugador=cartonJugador;
    return jugador1;
}

jugadorPtr destruirJugador(jugadorPtr jugador1){
    free(jugador1->nombre);
    free(jugador1->dni);
    //free(jugador1->carton);
    free(jugador1);
    return NULL;
}

void setNombreJugador(jugadorPtr jugador1, char* nombre){
    free(jugador1->nombre);
    jugador1->nombre=crearStringDinamico(nombre);
}

void setDniJugador(jugadorPtr jugador1, char* dni){
    free(jugador1->dni);
    jugador1->dni=crearStringDinamico(dni);
}

/*void setCartonJugador(jugadorPtr jugador1, cartonPtr cartonJugador){
    free...
    jugador1->carton=cartonjugador;
}*/

char* getNombreJugador(jugadorPtr jugador1){
    return(jugador1->nombre);
}

char* getDniJugador(jugadorPtr jugador1){
    return(jugador1->dni);
}

/*cartonPtr getCartonJugador(jugadorPtr jugador1){
    return(jugador1->carton);
}
*/
void mostrarJugador(jugadorPtr jugador1){
    printf("%s\n",getNombreJugador(jugador1));
    printf("%s\n",getDniJugador(jugador1));
}
