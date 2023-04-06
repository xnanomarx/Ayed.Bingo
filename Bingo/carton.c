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

void mostrarCarton(cartonPtr carton){
    system("cls");
    printf("------ CARTON -------\n");
    printf("Vendido por: %s\n",carton->agenciaCarton->nombreAgencia);
    printf("Direccion: %s\n ------ JUGADA ------\n",carton->agenciaCarton->direccion);
    printf("%d &d &d &d &d &d &d &d\n",carton->numero[0],carton->numero[1],carton->numero[2],carton->numero[3],carton->numero[4],carton->numero[5],carton->numero[6],carton->numero[7]);

}

