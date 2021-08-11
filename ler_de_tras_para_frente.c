#include <stdio.h>
#include <string.h>
int main(void) {
char nome[20];
    printf("Digite um nome: ");
     scanf("%s", nome);
int len = strlen(nome), i;
    for(i = len-1; i >= 0; i--) {
    printf("%c", nome[i]);
    }
    printf("\n");
  return 0;
}
