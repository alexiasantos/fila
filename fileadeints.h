// Arquivo filadeints.h.
// Exporta fun��es de manipula��o
// de uma fila an�nima de inteiros.

#ifndef _FILADEINTS_H
#define _FILADEINTS_H

// Cria uma fila vazia.
void criafila (void);

// Devolve 1 se a fila estiver vazia
// e 0 em caso contr�rio.
int filavazia (void);

// Coloca y na fila.
void colocanafila (int y);

// Tira um elemento da fila e devolve
// o seu valor. N�o deve ser invocada
// se a fila estiver vazia.
int tiradafila (void);

// Libera o espa�o ocupado pela fila.
// A fila deixa de existir.
void liberafila (void);

#endif
