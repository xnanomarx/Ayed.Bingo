#include "Carton.h"

cartonPtr crearCarton(int* numero,agenciaPtr agencia){
    cartonPtr carton1=(cartonPtr)obtenerMemoria(sizeof(carton));
    carton1->numero=(int*)malloc(sizeof(int)*8);
    for(int i=0;i<8;i++){
        carton1->numero[i]=numero[i];
    }
    carton1->agenciaCarton=agencia;

    return carton1;
}

cartonPtr destruirCarton(cartonPtr carton){
    free(carton->numero);
    free(carton->agenciaCarton);

    free(carton);
    return NULL;
}

int* getNumeroCarton(cartonPtr carton){
    return carton->numero;
}

char* getDireccion(cartonPtr carton){
    return carton->agenciaCarton->direccion;
}



