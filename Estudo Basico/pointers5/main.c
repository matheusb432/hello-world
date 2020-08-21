#include <stdio.h>
#include <stdlib.h>

// Arrays como argumentos de funcoes

int SumOfElements(int* A, int size)   // Os elementos da funcao sao o array e o tamanho do array
{    // A funcao interpreta int A[] como int* A, e entao so registra 4 bytes de memoria, tornando o int size impreciso caso esteja contido na propria funcao.
    int i, sum = 0;
    for(i=0;i<size;i++)
    {
        sum += A[i];
    }
    return sum;
}

void Double(int* A, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        A[i] = A[i] * 2;
    }
}

/*int Double(int* A, int size)
{
    int i, dbl = 0;
    for(i=0;i<size;i++)
    {
        dbl += A[i]*2;

    }
    return dbl;
} */


int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);   // Dividindo o tamanho em bytes do array pelos bytes de um elemento dele, eh possivel descobrir a quantidade de elementos do array.
    int total; // = SumOfElements(A,size);
   /* int total2 = Double(A,size); */
   // printf("Sum of elements = %d\n", total);
   /* printf("Double of elements = %d\n", total2); */
    Double(A,size);  // Chamando a funcao Double duplica cada valor do Array A[].
    for(int i=0;i<size;i++)
    {
        printf("%d ", A[i]);
    }




    return 0;
}
