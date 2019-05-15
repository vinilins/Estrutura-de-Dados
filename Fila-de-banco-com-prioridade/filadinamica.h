#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct no{
  char nome[51];
	int idade;
	struct no *prox;
}no;

typedef struct{
	no *inicio;
	no *fim;
}fila;

fila* criarFila ();

void insere(fila *f,char nome[51], int idade);

void retira(fila *f);