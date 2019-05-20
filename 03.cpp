#include<stdio.h>
#include<stdlib.h>
struct lista{
	int conteudo;
	lista*prox;
};
typedef struct lista fila;
fila* criarfila(fila*ini)
{
	ini = NULL;
	return ini;
}
fila* inserir(fila *x, int info)
{
 fila *p = x;
 fila *aux = x;
 fila *novo = (fila*) malloc(sizeof(fila));	
 novo->conteudo = info;
 novo->prox = NULL;
 
 while((aux!=NULL) )
  {
  		p=aux;
  		aux=aux->prox;
	}
  if(p==aux)
  {
  	novo->prox = p;
    x=novo;
	}else{
		novo->prox=p->prox;
		p->prox=novo;
	}
	return x;
}

fila* remove (fila *L,fila *fim) {

 fila *p = L;
 	fim->prox=p->prox;
 	L= p->prox;
 	free (p);
 	return L; 
 	}

	
fila* mostraLista(fila *x)
{
	printf("\nElementos da Fila\n");
		while (x != NULL)
	    {
	      printf(" [%i]",x->conteudo);
	      x = x->prox; 
	    
	    }
		return x;	
}

int main()
{
	fila* ini , *fim ;
	ini = criarfila(ini);
	ini = inserir(ini,6); 
	fim = inserir(ini,8); 
	fim = inserir(fim,9);
	fim = inserir(fim,10);
	mostraLista(ini);
	ini=remove(ini,fim); 
    mostraLista(ini);
	
	return 0;
}
