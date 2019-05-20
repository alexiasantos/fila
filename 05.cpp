#include<stdio.h>
#include<stdlib.h>
typedef struct no {
 int info;
 struct no* ant;
 struct no* prox;
}fila;


fila* criaFila(){
	return NULL;
}


fila* insere (fila* u, int conteudo){
	fila *novo;
	novo = (fila*) malloc (sizeof(fila));
	novo->info = conteudo;
	novo->prox = u;
	novo->ant = NULL;
	if (u == NULL){
		return novo;
	}else {
		u->ant = novo;
		return novo;
	}
}

fila* remove (fila *p) {
 	fila *aux = p->ant;
 	free (p);
 	return aux; 
 }

void mostraFila(fila *x)
{
	printf("\nElementos da Fila\n");
		while (x != NULL)
	    {
	      printf(" [%i]",x->info);
	      x = x->prox; 
	    
	    }
}


int main (){
	fila* p = criaFila();
	fila* u = p;
	int conteudo;
	
	while (1){
		printf("Digite o numero a ser inserido na fila\n");
		printf("Digite -1 para encerrar\n");
		scanf("%d",&conteudo);
		if(conteudo == -1){
			break;
		}else{
			if (p == NULL){
			p = insere(p,conteudo);
			u = insere(u,conteudo);
			p->ant = u;
		}else {
			u = insere(u,conteudo);
		}
		}
		
	}
	mostraFila(u);
	p=remove(p); 
    mostraFila(u);
	
	return 0;
}


