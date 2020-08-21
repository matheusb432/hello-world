#include <stdio.h>
#include <stdlib.h>



int* Add(int* a, int* b){  // Funcao chamada - retorna ponteiro para inteiro
//  obs; funcao precisa ser int* para retornar ponteiro.
    int *c = (*a) + (*b);
    return &c; // Retornando o endereco de c
}

int main(){     // Funcao que esta chamando
    int a = 2, b = 4;
    int* ptr = Add(&a,&b);     // Para armazenar o endereco de c, eh necessario criar uma variavel ponteiro
    printf("Sum = %d\n",*ptr); // Desreferenciando ptr para apresentar o valor numerico no print
    return 0;
}
