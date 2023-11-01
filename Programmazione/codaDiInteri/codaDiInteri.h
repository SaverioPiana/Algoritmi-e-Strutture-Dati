#ifndef _CODA_DI_INTERI_H
#define _CODA_DI_INTERI_H

typedef struct ci {
	int head;
	int tail;
	int* A;
	int size;

}struct_ci;

typedef struct_ci* codaDiInteri;

codaDiInteri newCodaDiInteri(int size);
void freeCodaDiInteri(codaDiInteri c);
void printCodaDiInteri(codaDiInteri c);
void enqueue(codaDiInteri c, int v);
int dequeue(codaDiInteri c);
#endif