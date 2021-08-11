#include <stdio.h>
#include <string.h>
int main(void) {
char palavra[20];
int i, vezes;
   printf("Digite uma palavra: ");
    scanf("%s", palavra);
   fflush(stdin);
   printf("Digite o número de vezes que se deseja imprimir : ");
    scanf("%d", &vezes);
   for(i = 0; i < vezes; i++) {
     printf("%s\n", palavra);
    }
return 0;
}
