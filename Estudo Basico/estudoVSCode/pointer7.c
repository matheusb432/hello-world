#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld(){
    printf("Hello World\n");
}

int* Add(int* a, int* b){  // Funcao chamada - retorna ponteiro para inteiro
//  obs; funcao precisa ser int* ( ou int *Add ) para retornar ponteiro.
    int* c = (int*)malloc(sizeof(int)); // Alocando espaco para c
    *c = (*a) + (*b); // Alocando espaco na heap (monte)
    return c;         // Retornando o endereco do bloco que esta no monte, e nao na pilha
}

int main(){     // Funcao que esta chamando     
    int a = 2, b = 4;
    int* ptr = Add(&a,&b);     // Para armazenar o endereco de c, eh necessario criar uma variavel ponteiro
    PrintHelloWorld();
    printf("Sum = %d\n",*ptr); // Desreferenciando ptr para apresentar o valor numerico no print 
}
