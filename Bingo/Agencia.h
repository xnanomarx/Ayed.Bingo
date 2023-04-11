#ifndef AGENCIA_H_INCLUDED
#define AGENCIA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "util.h"

typedef struct agencia{
    char* nombreAgencia;
    char* direccion;
}agencia;

typedef agencia* agenciaPtr;

agenciaPtr crearAgencia(char* nombreAgencia,char* direccion);

agenciaPtr destruirAgencia(agenciaPtr agencia1);

void setNombreAgencia(agenciaPtr agencia1, char* nombre);

void setDireccionAgencia(agenciaPtr agencia1, char* direccion);

char* getNombreAgencia(agenciaPtr agencia1);

char* getDireccionAgencia(agenciaPtr agencia1);

void mostrarAgencia(agenciaPtr agencia1);

#endif // AGENCIA_H_INCLUDED
