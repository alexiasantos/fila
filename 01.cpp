#include<stdio.h>
#include<stdlib.h>

typedef struct no{
int info;
struct no *prox;	
}Lista;

Lista* inserir(Lista*ini, int x){
	Lista *p=ini, *nova;
	
	nova = (Lista*)malloc(sizeof(Lista));
	nova->info = x;
	if(p!=NULL){
		while(p->prox!=ini){
			p=p->prox;
		}
		p->prox=nova;
		nova->prox = ini;
		
	}else{
		p=nova;
		p->prox=p;
		ini=p;
	}
	
	return ini;
}

Lista* remove (Lista *fi) {
 Lista *x = fi;
 Lista *p;
 p = fi->prox; // p aponta primeiro da fila
 x->info = p->info;
 fi->prox = p->prox;
 free (p);
 return x;
}

Lista* mostraLista(Lista *x)
{
	printf("\nElementos da Fila\n");
	Lista *aux=x;

		
		while (x != NULL)
	    {
	      printf(" [%i]",x->info);
	      x = x->prox; 
	      if(aux==x)
	      {
	      	return x;
		  }
	      
	    }	
}

int main(){
	Lista *L;
	L=NULL;
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
