#include <stdio.h>
#include <string.h>
int main(void) {
char palavra[20];
int i;
    printf("Digite uma palavra: ");
     scanf("%s", palavra);
int len = strlen(palavra);
    if(len % 2 != 0) {
    for(i = 0; i < len; i++) {
    if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'!= 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U') {
      printf("%c", palavra[i]);
    }
  }
     printf("\n");
} else {
printf("A palavra %s é par.\n", palavra);
}
return 0;
}
