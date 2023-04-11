#include "Carton.h"
#include <time.h>
#include "Agencia.h"
#include "util.h"
#include "jugar.h"


cartonPtr crearCarton(int* numero,agenciaPtr agencia){
    cartonPtr carton1=(cartonPtr)obtenerMemoria(sizeof(carton));
    carton1->numero=(int*)malloc(sizeof(int)*8);
    for(int i=0;i<8;i++){
        carton1->numero[i]=numero[i];
    }
    ordenarVector(carton1->numero, 8);
    carton1->agenciaCarton=agencia;

    return carton1;
}

cartonPtr crearCartonAleatorio(agenciaPtr agencia){
    srand(time(NULL));
    cartonPtr cartonAle=(cartonPtr)obtenerMemoria(sizeof(carton));
    cartonAle->numero=(int*)malloc(sizeof(int)*8);
    for(int i=0;i<8;i++){
        cartonAle->numero[i]=rand()%100;
    }
    ordenarVector(cartonAle->numero, 8);
    cartonAle->agenciaCarton=agencia;

    return cartonAle;
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

agenciaPtr getAgencia(cartonPtr carton){
    return carton->agenciaCarton;
}

void mostrarCarton(cartonPtr carton){
    system("cls");
    printf("------ CARTON -------\n");
      printf("Vendido por: %s\n",getNombreAgencia(carton->agenciaCarton));
    printf("Direccion: %s\n ------ JUGADA ------\n",getDireccionAgencia(carton->agenciaCarton));
    printf("%d %d %d %d %d %d %d %d\n",carton->numero[0],carton->numero[1],carton->numero[2],carton->numero[3],carton->numero[4],carton->numero[5],carton->numero[6],carton->numero[7]);
}

void jugarHastaGanar(cartonPtr carton){
    system("cls");
    srand(time(NULL));
    fflush(stdin);
    int cantJugadas=0;
    int aciertos=0;
    int* jugada=(int*)obtenerMemoria(sizeof(int)*20);
    for(int i=0;i<20;i++){
        jugada[i]=rand()%100;
    }
    int* cartonUsuario=(int*)obtenerMemoria(sizeof(int)*8);
    cartonUsuario=getNumeroCarton(carton);
    do{
       for(int i=0;i<20;i++){
        for(int k=0;k<8;k++){
            if(cartonUsuario[k]==jugada[i]){
                aciertos++;
            }
        }
        }
        cantJugadas++;
    }while(aciertos!=8);

    printf("Para ganar con su carton, deberia haber jugado %d veces.",cantJugadas);
}
