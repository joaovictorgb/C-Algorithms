#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,num2,cal;
    printf("Digite um numero positivo : \n");
    scanf("%d",&num);
    printf("Digite outro numero positivo : \n");
    scanf("%d",&num2);
    cal=(num+num2);
    if(num>0){
         printf("a soma entre %d e %d é %d\n",num,num2,cal);
    }
    else if(num<0){
         printf("%d é negativo,tente novamente!\n",num);
    }
    return 0;
}
