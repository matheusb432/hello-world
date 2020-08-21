#include <stdio.h>
#include <stdlib.h>

//void A(){
//   printf("Hello");
//}

//void B(void (*ptr)()){ // Function pointer como argumento
//    ptr(); // call-back a funcao que "ptr" esta apontando.
//}

int compare(int a, int b){
    if(a>b) return -1;
    else return 1;
}

int absolute_compare(int a, int b){
    if(abs(a) > abs(b)) return 1;
    return -1;
}

// callback function should compare two integers, should return 1 if first element has (1/2) 
// higher rank, 0 if elements are equal and -1 if second element has higher rank       (2/2)
void BubbleSort(int A[], int n, int (*compare)(int,int)){
    int i,j,temp = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){     // j<n-1 pois na ultima posicao, j+1 seria um valor inexistente, logo o for so percorrera ate o penultimo valor.
            if( compare(A[j],A[j+1]) > 0){ // Se A[j] for maior/menor que A[j+1], trocar os valores para ordenar em ordem crescente/decrescente.
            //  comparar A[j] e A[j+1] e trocar caso necessario
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    
    int A[] = {-31,22,-1,50,-6,4}; // ordenar em ordem crescente do valor absoluto => {-1,4,-6,22,-31,50}
    int i, n;
    BubbleSort(A,6,absolute_compare);
    for(i=0;i<6;i++){
        printf("%d ", A[i]);
    }
   // B(A); // A eh uma funcao callback.

}