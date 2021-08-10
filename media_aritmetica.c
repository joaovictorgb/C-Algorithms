#include <stdio.h>
int main() 
{
	int n1, n2 ,n3, n4 ;
    printf("Digite o primeiro numero : ");
    scanf("%d",&n1);
	printf("Digite o segundo numero : ");
    scanf("%d",&n2);
    printf("Digite o terceiro numero : ");
    scanf("%d",&n3);
    printf("Digite o quarto numero : ");
    scanf("%d",&n4);
    printf("A media e :%.2f",(float)(n1 + n2 + n3 + n4)/4) ;
    return 0;
}
