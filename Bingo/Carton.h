#ifndef CARTON_H_INCLUDED
#define CARTON_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "Agencia.h"
#include "util.h"


typedef struct carton{
    int* numero;
    char* fechaEmision;
    char* fechaJuego;
    agenciaPtr agenciaCarton;
}carton;

typedef carton* cartonPtr;

cartonPtr crearCarton(int* numero,agenciaPtr agencia);

cartonPtr crearCartonAleatorio(agenciaPtr agencia);

cartonPtr destruirCarton(cartonPtr carton);

int* getNumeroCarton(cartonPtr carton);

char* getDireccion(cartonPtr carton);

void mostrarCarton(cartonPtr carton);

#endif // CARTON_H_INCLUDED
