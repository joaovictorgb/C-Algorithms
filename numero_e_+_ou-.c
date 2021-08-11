#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Digite um numero : \n");
    scanf("%d",&num);
    if(num>0){
         printf("%d é positivo!\n",num);
    }
    else if(num<0){
         printf("%d é negativo!\n",num);
    }
    return 0;
}
