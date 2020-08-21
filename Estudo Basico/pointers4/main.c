#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[] = {2,4,5,8,1};
/*    printf("%d\n",A);      //
    printf("%d\n",&A[0]);  // Imprime o endereco de A[0] usando &
    printf("%d\n",A[0]);   // Imprime o valor de A[0]
    printf("%d\n",*A);     // Imprime o valor de A[0] com a desreferenciacao
*/
    for(int i=0;i<5;i++){
        printf("Address = %d\n",&A[i]);
        printf("Address = %d\n",A+i);  // A+i eh o mesmo que o endereco de A[i] ( &A[i] ), se comporta como um ponteiro no array.
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i)); // *(A+i), que eh a desreferenciacao do ponteiro A+i, eh o mesmo que o valor de A[i]

    }

    return 0;
}
