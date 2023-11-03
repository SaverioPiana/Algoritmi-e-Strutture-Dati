#include "lista_s.h"
#include <stdlib.h>
#include <stdio.h>

void insert_lista_s(lista_s* l, int n) {

   item* new = (item*)malloc(sizeof(item));
   new->info = n;
   new->next = (*l);
   (*l) = new;
}

int somma_lista_s(lista_s l) {

   int somma = 0;
   item* x = l;
   while( x != NULL) {
      somma += x->info;
      x = x->next;
   }
   return somma;
}

int massimo_lista_s(lista_s l) {

   if( l == NULL ) {
      printf("funzione massimo_lista_s() lanciata su lista vuota\n");
      exit(1);
   }

   int max = l->info;
   item* x = l->next;
   while( x != NULL ) {
      if( x->info > max ) {
         max = x->info;
      }
      x = x->next;
   }
   return max;
}

item* search_lista_s(lista_s l, int n) {

   item* x = l;
   while ( x != NULL ) {
      if ( x->info == n ) return x;
      x = x->next;
   }
   return NULL;
}

void print_lista_s(lista_s l) {
   int primo = 1;
   printf("lista = ");
   while( l != NULL ){
      if( !primo ) {
         printf("->");
      }
      primo = 0;
      printf("[%d]", l->info );
      l = l->next;
   }
   printf("\n");
}

void cancella_lista_s(lista_s* l, item* i){

   if( (*l) == NULL || i == NULL ) {
      printf("ERRORE: cancellazione di una lista vuota o un elemento null\n");
      exit(1);
   }

   if( i  == (*l) ) { // vuoi cancellare il primo elemento della lista
      (*l) = (*l)->next;
   }
   item* prec = (*l);
   while( prec->next != i) {
      prec = prec->next;
   }
   prec->next = i->next;
   free(i);
}
void cancella_lista_s_elem(lista_s* l, int v){

   if( (*l) == NULL) {
      printf("ERRORE: cancellazione di una lista vuota\n");
      exit(1);
   }

   if( v  == (*l)->info ) { // vuoi cancellare il primo elemento della lista
      (*l) = (*l)->next;
   }
   item* prec = (*l);
   while( prec->next != NULL) {
      if( prec->next->info == v){      //lho trovato
         item* cancellami = prec->next;
         prec->next = prec->next->next;//lho scavalcato
         free(cancellami);             //lho deallocato
      }
      else{
         prec = prec->next;
      }
   }
}
void push_lista_s(lista_s* l, int v){

   if( (*l) == NULL) {
      printf("ERRORE: cancellazione di una lista vuota\n");
      exit(1);
   }

   item* aggiungimi = (item*)malloc(sizeof(item));
   aggiungimi->info = v;
   aggiungimi->next = (*l);
   (*l) = aggiungimi;

}

int pop_lista_s(lista_s* l){

   if( (*l) == NULL) {
      printf("ERRORE: cancellazione di una lista vuota\n");
      exit(1);
   }

   item* cancellami = (*l);
   int output = cancellami->info;
   (*l) = (*l)->next;
   return output;

}