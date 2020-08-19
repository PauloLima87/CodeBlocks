#include <stdlib.h>
#include <iostream>
#include <stdio.h>

struct No {
 char Info;
 No *Esquerda;
 No *Direita;
};
int main (){
void Constroi(No **A);



}
void Constroi(No **A) {
 char D;
std:: cin >> D;
 if (D != '+') {
 *A = new No;
 (*A)->Info = D;
 Constroi (&(*A)->Esquerda);
 Constroi (&(*A)->Direita);
  } else *A = NULL;
}
