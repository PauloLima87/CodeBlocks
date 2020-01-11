#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// elemento da lista - nó ou nodo
struct Nodo {

	int info;
	struct Nodo *ant;
	struct Nodo *prox;

}no;


void main () {

	struct Nodo *inicio = NULL, *tmp, *p;
	int v;

	while( 1 ){

		printf( "\nValor? " );
		scanf( "%d", &v );

		if ( v == 0 ) break;

		// cria um novo nodo para ser inserido na lista
		tmp = (struct Nodo* ) malloc ( sizeof( struct Nodo ) );
		tmp -> info = v;
		tmp -> prox = NULL;

		if (inicio == NULL) { // lista vazia

			inicio = tmp;
			tmp->ant = tmp->prox = NULL;

		}
		else {

			// p irÃ¡ percorrer a lista
			p = inicio;

			while ( p->prox != NULL && p->info != v) {

				p = p->prox;

			}

			if ( p->info != v ){

				p->prox = tmp;
				tmp->ant = p;

			}
		}

	}


	// mostrando a lista
	p = inicio;
	while ( p != NULL ) {

		printf( "%d\t", p->info);
		p = p->prox;

	}
	printf( "\n");

}
