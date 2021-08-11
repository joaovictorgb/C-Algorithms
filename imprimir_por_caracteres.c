#include <stdio.h>
#include <string.h>
int main(void) {
char nome[20];
   printf("Digite uma palavra: ");
    scanf("%s", nome);
int len = strlen(nome), i;
   for(i = 0; i < len; i++) {
     printf("%s\n", nome);
    }
  return 0;
}
