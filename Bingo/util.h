#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

// Funci�n de obtenci�n de memoria
// Precondicion: Ninguna
// Postcondici�n: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Par�metros:
// tamanio: tama�o de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada

void* obtenerMemoria(size_t tamanio);

char* crearStringDinamico(char* literal);

void ordenarVector(int* vectorAOrdenar, int tamanio);

#endif // UTIL_H_INCLUDED
