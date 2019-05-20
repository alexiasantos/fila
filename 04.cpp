#include<stdio.h>
#include<stdlib.h>
#include <fileadeints.h>


static int *fila;
static int p, u, N;

void criafila (void) {
   N = 100;
   fila = malloc (N * sizeof (int));
   p = 0, u = 0;
}

int filavazia (void) {
   return p >= u;
}

static void redimensiona (void) {
   N *= 2;
   int *nova = malloc (N * sizeof (int));
   for (int i = p; i < u; i++)
      novo[i-p] = fila[i];
   u -= p;
   p = 0;
   free (fila);
   fila = nova;
}

void colocanafila (int y) {
   if (u == N) redimensiona ();
   fila[u++] = y;
}

// Supõe que p < u.
int tiradafila (void) {
   return fila[p++];
} 

void liberafila (void) {
   free (fila);
}
int main()
{
	Lista  *L;
	L = NULL;
	
	criaFila();
	L=colocanafila(5,L);
	L=tiradafila(L);
	liberafila();
	filavazia();
}
