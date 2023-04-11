#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "jugador.h"
#include "listas.h"

jugadorPtr crearJugador(char* nombre, char* dni, cartonPtr cartonJugador){
    jugadorPtr jugador1=(jugadorPtr)malloc(sizeof(jugador));
    jugador1->nombre=crearStringDinamico(nombre);
    jugador1->dni=crearStringDinamico(dni);
    jugador1->carton1=crearCarton(getNumeroCarton(cartonJugador),getAgencia(cartonJugador));
    return jugador1;
}

jugadorPtr destruirJugador(jugadorPtr jugador1){
    free(jugador1->nombre);
    free(jugador1->dni);
    jugador1->carton1=destruirCarton(jugador1->carton1);
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

void setCartonJugador(jugadorPtr jugador1, cartonPtr cartonJugador){
    jugador1->carton1=destruirCarton(jugador1->carton1);
    jugador1->carton1=crearCarton(getNumeroCarton(cartonJugador),getAgencia(cartonJugador));
}

//void eliminarCartonJugador(jugadorPtr jugador1){}

char* getNombreJugador(jugadorPtr jugador1){
    return(jugador1->nombre);
}

char* getDniJugador(jugadorPtr jugador1){
    return(jugador1->dni);
}

cartonPtr getCartonJugador(jugadorPtr jugador1){
    return(jugador1->carton1);
}

void mostrarJugador(jugadorPtr jugador1){
    printf("%s\n",getNombreJugador(jugador1));
    printf("%s\n",getDniJugador(jugador1));
}
