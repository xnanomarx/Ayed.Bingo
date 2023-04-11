#include <stdlib.h>
#include <stdio.h>
#include "listas.h"
#include "Agencia.h"

void crearAgencias(PtrLista listaAgencias){
    agenciaPtr agencia1=crearAgencia("La Ruta del Dinero F", "calle falsa 123");
    agenciaPtr agencia2=crearAgencia("Nehuen Ludopatia", "Pedernera 2435");
    agenciaPtr agencia3=crearAgencia("Meditazen", "Matheu 1494");
    agenciaPtr agencia4=crearAgencia("El Carton Oscuro", "Marsella 990");
    agenciaPtr agencia5=crearAgencia("El Imperio Hortaliza", "Nueva York 350");

    agregarDatoLista(listaAgencias,agencia1);
    agregarDatoLista(listaAgencias,agencia2);
    agregarDatoLista(listaAgencias,agencia3);
    agregarDatoLista(listaAgencias,agencia4);
    agregarDatoLista(listaAgencias,agencia5);
}

