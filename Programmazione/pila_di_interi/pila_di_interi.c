#include <stdlib.h> // per usare calloc e malloc
#include <stdio.h> // per usare printf
#include <math.h>
#include "pila_di_interi.h"

pila_di_interi new_pila_di_interi(int size) {

	pila_di_interi out = (pila_di_interi) malloc(sizeof(struct_pi));
	out->top = -1; // la pila e' vuota
	out->size = size;
	out->A = (int*) calloc(size, sizeof(int));

	return out;
}

void free_pila_di_interi(pila_di_interi p) {

	free(p->A); //rimuove l'array dall'heap
	free(p); //rimuove la struc_pi dall'heap
}

void print_pila_di_interi(pila_di_interi p) {
	int contaSpazi = 1;
	int topContatore = p->top;
	for(int i = 0; i< p->size; i++){
		int v = p->A[i];
		printf("[%d]", v);
		if(topContatore>0){
			contaSpazi+=(ceil(log10(v+1)))+2;
			topContatore--;
		}
	}
	printf("\n");
	while(contaSpazi>=0){
		printf("-");
		contaSpazi--;
	}
	printf("^");
	printf("\ntop = %d \n", p->top);
}

void push(pila_di_interi p, int v){
	if(p->top == p->size-1) {
		/* VERSIONE CON ARRAY DI DIMENSIONE FISSA
		printf("\033[0;31m"); //Set the text to the color red
		printf("ERRORE: ");
		printf("\033[0m"); //Resets the text to default color

		printf("Overflow nella pila (push %d)\n", v);
		exit(1); // 1 perche' ho avuto un errore
		*/
		p->size = p->size*2;
		p->A = (int*)realloc(p->A, p->size*sizeof(int));
		printf("Raddoppiato l'array (ora ha [%d] celle)\n", p->size);
	}
	p->top++;
	p->A[p->top] = v;
}

int pop(pila_di_interi p){
	if(p->top == -1) {
		printf("\033[0;31m"); //Set the text to the color red
		printf("ERRORE: ");
		printf("\033[0m"); //Resets the text to default color

		printf("Underflow durante un pop\n");
		exit(1);
	}
	p->top--;
	return p->A[p->top+1];
}