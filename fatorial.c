#include <stdio.h>

int main(void)
{
   int a,fatorial,i;

   printf("Digite um nÃºmero : ");
   scanf("%d",&a);
   fatorial =a;

   for(i=a-1;i>0;i=i-1){
       fatorial = fatorial*i;
   }
   printf("Seu fatorial Ã© :%d",fatorial);
    return 0;
}
