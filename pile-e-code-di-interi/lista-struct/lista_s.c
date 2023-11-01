#include <stdlib.h>
#include <stdio.h>
#include "lista_s.h"

void insert_lista_s(lista_s* l, int n) {

   item* new = (item*)malloc(sizeof(item));
   new->info = n;
   new->next = (*l);
   (*l) = new;
}

int somma_lista_s(lista_s l) {

   int somma = 0
   item* x = l;
   while(x != NULL) {
      somma+= x->info;
      x = x->next;
   }
   return somma;
}

int massimo_lista_s(lista_s l) {

   if( l == NULL ) {
      printf("funzione massimo_lista_s() lanciata su lista vuota\n");
      exit(1);
   }

   int max = l->info
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