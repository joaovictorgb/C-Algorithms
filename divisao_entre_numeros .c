#include <stdio.h>
int main()
{
    int Num=0;
    printf("Digite um numero: ");
    scanf("%d",&Num);
    if(Num % 7 == 0 + 3==0){
        printf("%d e divisivel por 7 e por 3.\n",Num);
    }
    else if(Num % 7 ==0 -! 3==0){
        printf("%d é divisivel apenas por um deles.\n",Num);
    }
    else
    {
        printf("%d nao e divisivel por 7 ou 3.\n",Num);
    }
    return 0;
}
