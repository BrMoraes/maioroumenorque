#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;
   int num[4];
   int num2[4];

   for (i = 0; i < 4; i++)
   {
      printf("Digite dois numeros:\n");
      scanf("%d %d", &num[i], &num2[i]);
      if (num[i] > num2[i])
      {
         printf("O numero %d e maior do que %d\n", num[i], num2[i]);
      }
      else if (num[i] < num2[i])
      {
         printf("O numero %d e menor do que %d\n", num[i], num2[i]);
      }
   }

   return 0;
}