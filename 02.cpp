#include<stdio.h>
#include<stdlib.h>

typedef struct no{
int info;
struct no *prox;	
}Lista;

Lista* CriaFila(){
	Lista *L =(Lista*) malloc (sizeof(Lista));
	L->info = NULL;
	L->prox = NULL;
		return L;

}

Lista* inserir (Lista *p,int x)
{
   
   Lista *nova =(Lista*) malloc (sizeof (Lista));
   nova->info = x;
   nova->prox = p->prox;
   p->prox = nova;
   return p;
}

Lista* remove (Lista *L) {

 	Lista *p = L;
 	Lista *aux = p->prox;
 	Lista *cabeca=L;
  	cabeca=p->prox;
 	free (p);
 	return cabeca; 

}

Lista* mostraLista(Lista *x)
{
	printf("\nElementos da Fila\n");
		x=x->prox;
		while (x != NULL)
	    {
	      printf(" [%i]",x->info);
	      x = x->prox; 
	    
	    }
		return x;	
}


int main(){
	Lista *L;
	L=CriaFila();
	int x=0;
	printf("Digite um numero\n");
	scanf("%d",&x);
    L=inserir(L,x);
    printf("\nDigite um numero!\n");
	scanf("%d",&x);
    L=inserir(L,x);
    printf("\nDigite um numero!\n");
	scanf("%d",&x);
    L=inserir(L,x);
    mostraLista(L);
	L=remove(L);
    mostraLista(L);
	return 0;
}
