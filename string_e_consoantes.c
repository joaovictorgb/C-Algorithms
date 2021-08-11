#include <stdio.h>
int main(void) {
   char frase[30];
   int consoantes = 0;
   printf("Digite uma frase:");
   scanf("%[^\n]",frase);
   for (int i = 0; frase[i] != '\0'; i++){
   	   char c = frase[i];
   	   if ('B' <= c && c <= 'Z') c += 32;
   	   if ('b' <= c && c <= 'z') {
   	       switch(c) { 
   	       	   case 'e':
   	       	   case 'i':
   	       	   case 'o':
   	       	   case 'u':
   	       	       break;
   	       	   default:
   	       	       consoantes++;
   	       }
   	   }
   }
