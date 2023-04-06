#include "Agencia.h"
#include <stdio.h>
#include <stdlib.h>

agenciaPtr crearAgencia(char* nombreAgencia,char* direccion){
    agenciaPtr agencia1=(agenciaPtr)obtenerMemoria(sizeof(agencia));
    agencia1->nombreAgencia=crearStringDinamico(nombreAgencia);
    agencia1->direccion=crearStringDinamico(direccion);

    return agencia1;
}

agenciaPtr destruirAgencia(agenciaPtr agencia1){
    free(agencia1->direccion);
    free(agencia1->nombreAgencia);
    free(agencia1);
    return NULL;
}

void setNombreAgencia(agenciaPtr agencia1, char* nombre){
    free(agencia1->nombreAgencia);
    agencia1->nombreAgencia=crearStringDinamico(nombre);
}

void setDireccionAgencia(agenciaPtr agencia1, char* direccion){
    free(agencia1->direccion);
    agencia1->direccion=crearStringDinamico(direccion);
}

char* getNombreAgencia(agenciaPtr agencia1){
    return(agencia1->nombreAgencia);
}

char* getDireccionAgencia(agenciaPtr agencia1){
    return(agencia1->nombreAgencia);
}
