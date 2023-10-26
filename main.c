#include <stdlib.h>
#include <stdio.h> // per usare printf
#include "pila_di_interi/pila_di_interi.h"
#include "codaDiInteri/codaDiInteri.h"

int main(){
	codaDiInteri mia_coda = newCodaDiInteri(4);

	printCodaDiInteri(mia_coda);
	for(int i=0; i<10 ; i++){
		enqueue(mia_coda, i);
		printCodaDiInteri(mia_coda);
	}

	freeCodaDiInteri(mia_coda);

	/*
	pila_di_interi mia_pila = new_pila_di_interi(4);

	for(int i=0; i< 110; i++){
		push(mia_pila, i);
		print_pila_di_interi(mia_pila);
	}
	print_pila_di_interi(mia_pila);
	printf("faccio il pop di %d\n", pop(mia_pila));
	print_pila_di_interi(mia_pila);
	free_pila_di_interi(mia_pila);
	*/

}