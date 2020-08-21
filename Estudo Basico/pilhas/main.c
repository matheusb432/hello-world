#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100 // definiu uma constante de tamanho 100

typedef struct {
   int Item[MAXTAM];
   int Topo;
} TPilha;

void TPilha_Inicia (TPilha *p) {
    p->Topo = -1;  // adiciona o valor -1 na int Topo com o ponteiro p
}

int TPilha_Vazia (TPilha *p) {
    if(p->Topo == -1){
        return 1;  // Se o topo for -1, a pilha ta vazia.
    } else {
        return 0; // retorna 0 se a pilha nao ta vazia.
    }

}

int TPilha_Cheia(TPilha *p){
    if(p->Topo == MAXTAM-1){  // como o indice do vetor eh 1 unidade menor que a posicao, p-> topo == maxtam-1
        return 1;
    } else {
        return 0;
    }
}

void TPilha_Insere(TPilha *p, int x) { // a variavel p representa a pilha, enquanto x eh o valor que eu devo inserir no topo da pilha
    if(TPilha_Cheia(p) == 1){
        printf("\nERRO: Pilha cheia");
    } else {
        p->Topo++;
        p->Item[p->Topo] = x;  // a posicao eh p->Item[p->Topo] e a o valor a ser inserido eh x
    }

}

int TPilha_Retira(TPilha *p){
    int aux;
    if(TPilha_Vazia(p) == 1){
        printf("\nERRO: Pilha vazia");
    } else {
        aux = p->Item[p->Topo];
        p->Topo--;   // O topo agora eh a posicao anterior a antes.
        return aux;
    }
}


int main(){
   TPilha *p = (TPilha*)malloc(sizeof(TPilha));
   TPilha_Inicia(p);

   TPilha_Insere(p, 1);
   TPilha_Insere(p, 2);
   TPilha_Insere(p, 3);

   int aux;

   aux = TPilha_Retira(p);
   printf("SAIU: %d", aux);
   aux = TPilha_Retira(p);
   printf("\nSAIU: %d", aux);
   aux = TPilha_Retira(p);
   printf("\nSAIU: %d", aux);
   aux = TPilha_Retira(p);
   printf("\nSAIU: %d", aux);


 return 0;
}
