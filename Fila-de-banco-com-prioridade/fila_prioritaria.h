#include <stdlib.h>
#include <filadinamica.h>
#include <stdio.h>

typedef struct filas{
  fila* filaNormal;
  fila* filaPrioritaria;
}filas;

filas* criarDuasFilas();

void inserirFilas(filas* f,char nome[51],int idade);

void removerFilas(filas*f);

void imprimirFilas(filas*f);