#include <stdio.h>
#include <stdlib.h>
// Ponteiros como argumentos de funcao - call by reference

void Incrementar(int *p)   // O argumento eh o ponteiro para o inteiro, que guardara o endereco desse inteiro
{
    *p = (*p) + 1;  // Desreferenciando p para incrementar o valor por 1.
}                          // Essa funcao passa o endereco da variavel ao inves do valor dela, assim eh chamada de "call by reference"

/*
void Incrementar(int a){
    a = a +1;
    printf("Endereco da variavel no incremento = %d\n", &a);  // O endereco da variavel a da funcao incrementar eh diferente do endereco da variavel a em main, logo sao variaveis diferentes.
}                                                             // a eh uma variavel local, logo nao pode ser chamada para outra funcao com um void, logo o codigo nao faz o que devia.
*/
int main()
{
    int a = 2;
    Incrementar(&a);  // Passando o endereco de 'a' para a funcao
    printf("x = %d", a);
    return 0;
}
