#ifndef _LISTA_S
#define _LISTA_S

typedef struct it {
	
	int info;
	struct it* next;

} item;

typedef item* lista_s; // puoi usare "item*" o "lista_s" e' lo stesso

/*  questa definizione qui sotto e' obbligatoria se la
    lista ha piu' di un attributo, altrimenti e' un po'
    prolissa

typedef struct lis {

   item* head;
   int size;

} lista;
*/