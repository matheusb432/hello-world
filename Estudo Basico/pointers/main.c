#include <stdio.h>

int main()
{
    int x = 7;
    printf("x is %d\n", x);

    x = 14;
    printf("x is %d\n", x);

    int *aptr = &x; // Endereco de x eh &x, e * define que a variavel eh um ponteiro.

    printf("aptr is %x\n", aptr); // %x facilita a leitura do endereco de X, e o printf apenas mostrara o endereco de onde esta x.

    printf("x is %d\n", *aptr); // *aptr mostra o valor de x, enquanto aptr mostra o endereco de x.

    *aptr = 21;

     printf("x is %d %d\n", x, *aptr); // x eh o mesmo que *aptr.

    return 0;
}
