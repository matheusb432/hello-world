#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *p;    // *p eh uma variavel que guarda o endereco de outra variavel, logo, um ponteiro
 // obs; int* = p; == int *p;
    char c, *p0;  // *p0 eh um ponteiro para um char
    double d, *p1; // *p1 eh um ponteiro para um double
    p = &a;   // &a = endereco de a
    *p = 12;  // desreferenciando, que modifica o valor de a pelo ponteiro.
    printf("Adress p is %d\n", p);   // p eh o endereco de a.
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Adress p+1 is %d\n", p+1); // p+1, ja que esta referenciando um inteiro, aumentara por 4, ja que um inteiro armazena 4 bytes.
    printf("%d\n", *p);  // *p desreferencia p, logo da o valor no endereco apontado por p.
    printf("%d\n", &a);  // &a eh o endereco de a, entao, o mesmo que p
  //  printf("%d\n", p);  // *p desreferencia p, logo da o valor da variavel


    return 0;
}
