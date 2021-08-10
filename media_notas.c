#include <stdio.h>
int main() 
{
	int nota1, nota2 ,nota3, nota4 ;
    printf("Digite a primeira nota : ");
    scanf("%d",&nota1);
	printf("Digite a segunda nota : ");
    scanf("%d",&nota2);
    printf("Digite a terceira nota : ");
    scanf("%d",&nota3);
    printf("Digite a quarta nota : ");
    scanf("%d",&nota4);
    printf("A media aritmetica das notas e :%.2f",(float)(nota1 + nota2 + nota3 + nota4)/4) ;
    return 0;
}
