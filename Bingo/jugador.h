#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "Carton.h"
#include "listas.h"

typedef struct jugador{
    char* nombre;
    char* dni;
    cartonPtr carton1;
}jugador;

typedef jugador* jugadorPtr;

//Precondicones:
//Postcondiciones:
//Atributos:
//
//Devuelve
jugadorPtr crearJugador(char* nombre, char* dni, cartonPtr cartonjugador);

jugadorPtr destruirJugador(jugadorPtr jugador1);

void setNombreJugador(jugadorPtr jugador1, char* nombre);

void setDniJugador(jugadorPtr jugador1, char* dni);

void setCartonJugador(jugadorPtr jugador1, cartonPtr cartonJugador);

char* getNombreJugador(jugadorPtr jugador1);

char* getDniJugador(jugadorPtr jugador1);

cartonPtr getCartonJugador(jugadorPtr jugador1);

void mostrarJugador(jugadorPtr jugador1);

#endif // JUGADOR_H_INCLUDED
