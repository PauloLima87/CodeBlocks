#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//declaraada como fun��o global
struct lista{
        int valor;
        struct lista *proximo; //aponta para o endere�o de memoria de uma lista
    };

    struct lista *procuraValor (struct lista *pLista, int valor){ //retorna um endere�o de memoria do tipo lista;

        while(pLista!= (struct lista *) 0)
        {
            if(pLista->valor ==valor){
                return(pLista);
            }else{
                pLista = pLista->proximo;
            }

        }return(struct lista *)0;
    }

int main (int argc, char *argv[])
{

    setlocale(LC_ALL, "Portuguese"); //aceitar caracteres especiais e pontua��o em PT-BR


    struct lista *procuraValor (struct lista *pLista, int valor); //declara��o para uso local
    struct lista m1,m2,m3;
    struct lista *resultado,*gancho = &m1;
    int valor;

    m1.valor=5;
    m2.valor=10;
    m3.valor=15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *) 0 ; //fecha a lista apontando para uma strutura de lista de valor nulo

    printf("Digite o valor da Pesquisa: \n");
    scanf("%i", &valor);

    resultado = procuraValor(gancho, valor);

    if (resultado == (struct lista *)0){
       printf("Valor N�o encontrado. \n");
       }else{
           printf("Valor %i Encontrado", resultado->valor);
       };


getchar(); //desnecess�rio para o CODE BLOCKS.
return 0;
}


