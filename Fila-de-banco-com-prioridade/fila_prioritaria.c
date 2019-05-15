#include <fila_prioritaria.h>

filas* criarDuasFilas(){
  filas* novas = (filas*)malloc(sizeof(filas));
  novas->filaNormal = criarFila();
  novas->filaPrioritaria = criarFila();
  return novas;
}

void inserirFilas(filas* f,char nome[51],int idade){
  if(idade>=65){
    insere(f->filaPrioritaria,nome,idade);
  }
  else{
    insere(f->filaNormal,nome,idade);
  }
}

void removerFilas(filas*f){
  if((f->filaPrioritaria)->inicio==NULL){
    retira(f->filaNormal);
  }
  else{
    retira(f->filaPrioritaria);
  }
}

void imprimirFilas(filas*f){
  printf("[ ");
  no* fil = (f->filaPrioritaria)->inicio;
  while(fil!=NULL){
    printf("(%s,%d) ",fil->nome,fil->idade);
    fil = fil->prox;
  }
  fil = (f->filaNormal)->inicio;
  while(fil!=NULL){
    printf("(%s,%d) ",fil->nome,fil->idade);
    fil = fil->prox;
  }
  printf("]\n");
}