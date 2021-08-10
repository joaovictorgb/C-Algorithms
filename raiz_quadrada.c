#include <stdio.h>
#include<conio.h>
#include <math.h>
int main () {
	       int n, raiz,num;
         printf("Digite um numero inteiro para calcularmos a elevacao e a raiz quadrada: ");
         scanf("%d",& n);
         num= n*n;
         raiz= sqrt(n );
         printf ("O quadrado do numero e: %d \n", num);
         printf("A raiz quadrada de %d e:%.d \n", n,raiz );
         return 0;
}
