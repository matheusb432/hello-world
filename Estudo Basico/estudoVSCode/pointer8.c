#include <stdio.h>
#include <stdlib.h>
// Function pointers; ponteiros que podem guardar o endereco de funcoes, ou seja, que podem apontar para funcoes

void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

int Add(int a, int b)
{
    return a+b;
}
//int *Func(int,int);   // Declarando uma funcao que retornara int* ( ponteiro para o inteiro )
//int (*Func)(int,int); // Declarando uma function pointer
// int* Func == int *Func
int main()
{
    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Tom");
    int c;
    int (*p)(int,int); // Obs; o tipo da funcao ponteiro deve ser o mesmo da funcao que ele esta usando ( int -> int, void -> void, etc )
    p = &Add;
    c = (*p)(2,3); // Desreferenciando e executando a funcao
    //    p(2,3) tambem faz a mesma coisa.
    printf("\n%d", c);

}