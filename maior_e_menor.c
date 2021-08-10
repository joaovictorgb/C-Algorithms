#include<stdio.h>
int main()
{
 int numero, maior, menor;
 int i;
 printf("Entre com o 1º numero inteiro: ");
 scanf("%i", &numero);
 maior=numero;
 menor=numero;
 for(i=1; i<5; i++)
 {
 printf("\nEntre com o %dº numero inteiro: ",i+1);
 scanf("%i", &numero);
 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }
 printf("\nO menor numero inteiro é: %d", menor);
 printf("\nO maior numero inteiro  é: %d", maior);
 return 0;
} 
