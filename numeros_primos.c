#include<stdio.h>
 
int main() {
 int num, i, resultado = 0;
 
 printf("Digite um nÃºmero maior que 1: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado=1;
       break;
    }
 }
 
 if (resultado == 0){
    printf("Ã‰ primo\n", num);
 }else{
    printf("NÃ£o Ã© primo\n", num);
 }
 
 return 0;
}
