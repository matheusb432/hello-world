#include <stdio.h>

int main()
{
    int somenumbers[5];
    int *ptr = somenumbers; // o pointer aponta pro inicio do array &somenumbers[0]
    int v = 2;

    for(;ptr<&somenumbers[5];ptr++) {
         *ptr = v;                     // percorrera o array somenumbers com o ponteiro e dara o valor de v para cada um
         v = v * 2;                    // multiplica o valor por 2 , deixando os resultados 2, 4, 8, 16, 32.
      }

      int i;
      for(i=0;i<5;i++) {
            printf("%d\n", somenumbers[i]);
            printf("ptr is %d\n", ptr);
      }


    return 0;
}
