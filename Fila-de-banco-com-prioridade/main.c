#include <fila_prioritaria.h>

int main(void) {
  filas* f = criarDuasFilas();
  inserirFilas(f,"Vinicius",17);
  inserirFilas(f,"Gelivio",65);
  inserirFilas(f,"Rosa",66);
  inserirFilas(f,"Henrique",18);
  imprimirFilas(f);
  removerFilas(f);
  imprimirFilas(f);
  removerFilas(f);
  imprimirFilas(f);
  removerFilas(f);
  imprimirFilas(f);
  removerFilas(f);
  imprimirFilas(f);
  return 0;
}