#ifndef _PILA_DI_INTERI_H
#define _PILA_DI_INTERI_H

typedef struct pi {
	int top;
	int* A;
	int size;
}struct_pi;

typedef struct_pi* pila_di_interi;

pila_di_interi new_pila_di_interi(int size);

void free_pila_di_interi(pila_di_interi p);

void print_pila_di_interi(pila_di_interi p);

void push(pila_di_interi p, int v);

int pop(pila_di_interi p);

#endif