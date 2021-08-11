#include <stdio.h>
#include <string.h>
int main(void) {
char nome[30];
    printf("Digite um nome: ");
      scanf("%s", nome);
int len = strlen(nome), i;
    for(i = 1; i < len; i++) {
    if(i % 2 == 0) {
     printf("%c", nome[i]);
    }
  }
     printf("\n");
  return 0;
}
