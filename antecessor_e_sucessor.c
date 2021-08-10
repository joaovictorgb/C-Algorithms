#include <stdio.h>
int main() 
{
	int num, ant,suc ;
	printf("Escreva um numero inteiro para mostramos o antecessor e o sucessor deste : ");
	scanf("%d",&num);
	ant= num - 1;
	suc= num + 1;
    printf("O antecessor e : %d\n",ant);
    printf(" O sucessor e :%d\n",suc);
    return 0;
}
