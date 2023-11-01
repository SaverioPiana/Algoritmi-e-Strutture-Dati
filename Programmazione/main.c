#include <stdlib.h>
#include <stdio.h> // per usare printf
#include "pila_di_interi/pila_di_interi.h"
#include "codaDiInteri/codaDiInteri.h"

int main(){
	
	/* OPERAZIONI SU UNA LISTA SEMPLICEMENTE CONCATENATA DI INTERI */
   
   	lista_s l = NULL; // lista vuota

   	insert_lista_s(&l, 1);
   	insert_lista_s(&l, 2);
   	int i;
   	for(i = 3 ; i < 20; i++) {
   		insert_lista_s(&l,-i);
  	}
  	print_lista_s(l);

  	printf("la somma degli elementi della lista e' %d\n", somma_lista_s(l));
  	printf("il massimo degli elementi della lista e' %d\n", massimo_lista_s(l));

  	printf("la ricerca di -5 produce NULL? %d\n",search_lista_s(l,-5) == NULL);
  	printf("la ricerca di +5 produce NULL? %d\n",search_lista_s(l,5) == NULL);


	/*////////CODE/////////
	codaDiInteri mia_coda = newCodaDiInteri(4);

	printCodaDiInteri(mia_coda);
	for(int i=0; i<3 ; i++){
		enqueue(mia_coda, i);
		printCodaDiInteri(mia_coda);
	}
	for(int i=0; i<4 ; i++){
		printf("Dequeue Di (%d) <---\n", dequeue(mia_coda));
		printCodaDiInteri(mia_coda);
	}

	freeCodaDiInteri(mia_coda);
	*/
	/* ///////PILE////////
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