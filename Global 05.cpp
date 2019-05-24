#include<stdio.h>
#include<stdlib.h>
typedef struct no {
 int info;
 struct no* ant;
 struct no* prox;
}fila;


/// validado e pronto para enviar


static fila* p;
static fila* u;

void criafila (void) {
   p = (fila*) malloc (sizeof(fila));
   u = (fila*) malloc (sizeof(fila));
   p=NULL;
   u=NULL;
}


void insere (int conteudo){
	fila *novo;
	novo = (fila*) malloc (sizeof(fila));
	novo->info = conteudo;
	novo->prox = u;
	novo->ant = NULL;
	if (p == NULL){
		p=novo;
		u=novo;
	}else {
		u->ant = novo;
		u = novo;	
	}
}

void remove () {
 	fila *aux = p;
 	p=p->ant;
 	
 	p->prox = NULL;
 	free (aux);
}


void mostraFila(){
	printf("\nElementos da Fila\n");
	fila* x = u;
	while (x != NULL){
      printf(" [%i]",x->info);
      x = x->prox; 
    }
}


int main (){
	criafila();
	insere(1);
	insere(2);
	insere(3);
	insere(4);
	mostraFila();
	remove();
	mostraFila();
}
