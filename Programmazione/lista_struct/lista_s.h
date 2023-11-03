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

void insert_lista_s(lista_s* l, int v);

int somma_lista_s(lista_s l);

int massimo_lista_s(lista_s l);

item* search_lista_s(lista_s l, int v);

void print_lista_s(lista_s l);

void cancella_lista_s(lista_s* l, item* i);

void cancella_lista_s_elem(lista_s* l, int v);

void push_lista_s(lista_s* l, int v);

int pop_lista_s(lista_s* l);

#endif