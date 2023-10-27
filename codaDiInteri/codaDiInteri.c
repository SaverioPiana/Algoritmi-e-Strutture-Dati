#include "codaDiInteri.h"
#include <stdlib.h>
#include <stdio.h>

codaDiInteri newCodaDiInteri(int size){

	codaDiInteri out = (codaDiInteri)malloc(sizeof(struct_ci));
	out->head = 0;
	out->tail = 0;
	out->size = size;
	out->A =(int*)calloc(size, sizeof(int));

	return out;
}
void freeCodaDiInteri(codaDiInteri c){

	free(c->A);
	free(c);

}
void printCodaDiInteri(codaDiInteri c){

	for(int i = 0; i< c->size; i++){
		int v = c->A[i];
		printf("[%d]", v);
	}
	printf("\nhead = %d \n", c->head);
	printf("tail = %d \n", c->tail);
}

void enqueue(codaDiInteri c, int v){
	if( (c->tail == c->head-1) ||
		(c->tail == c->size-1) && c->head == 0){
		// printf("ERRORE: Overflow della coda: enqueue di (%d)\n", v);
		// exit(1);
		/*Gestione Telescopica*/
		c->size*=2;
		c->A = (int*)realloc(c->A, sizeof(int)*c->size);
		if(c->head > c->tail){
			for(int i = 0; i< c->tail; i++){
				c->A[c->size/2+i] = c->A[i];
			}
		}
	}
	c->A[c->tail] = v;
	c->tail++;
	if( c->tail == c->size)
		c->tail = 0;
		
}
void dequeue(codaDiInteri c);