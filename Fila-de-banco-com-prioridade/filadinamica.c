#include <filadinamica.h>

fila* criarFila() {
    fila *f = (fila*)malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void insere (fila *f,char nome[51], int idade){
  no *novo = (no*)malloc(sizeof(no));
  strcpy(novo->nome,nome);
	novo->idade = idade;
	novo->prox = NULL;
	if(f->fim != NULL) {
		f->fim->prox = novo;
        f->fim = novo;
	}
	else {
		f->inicio = novo;
		f->fim = novo;
	}
}

void retira(fila *f) {
	no *temp;
	if(f->inicio == NULL) printf("Fila Vazia!\n");
	else {
		temp = f->inicio;
		f->inicio = f->inicio->prox;
		if(f->inicio == NULL) {
			f->fim = NULL;
		}	
		free(temp); //desaloca a memória 
	}
}