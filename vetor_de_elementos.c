#include <stdio.h>
#include <locale.h>
int main(void) {
int vetor[30], i;
     printf("Informe os elementos do vetor.\n\n");
     for(i = 0; i < 30; i++) {
       printf("Elemento %d: ", i+1);
         scanf("%d", &vetor[i]);
     fflush(stdin);
  }
     printf("A ordem contraria deste vetor é ;\n");
     for(i = 29; i >= 0; i--) {
     printf("%d ", vetor[i]);
  }
    printf("\n");
   return 0;
}
