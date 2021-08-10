// Peso ideal Para homens (72.7 x altura) -58 | Para mulheres (62.1 x altura) -44.7

#include<stdio.h>
int main(void){
	char sexo [30];
	double altura;
	double masculino,feminino;
      printf("Qual a sua altura: \n");
             scanf("%lf",&altura);
      printf("Qual seu sexo,para m-masculino e f-Feminino : \n  ");
             scanf("%s",&sexo);
      masculino = ((72.7*altura)-58.0);
      feminino = ((62.1*altura)-44.7);
          if(sexo=='M'){
              	printf("Seu peso ideal é: %.2lf",masculino);
         }if(sexo=='F'){
            	printf("Seu peso ideal é: %.2lf",feminino);
         }
  return 0;
}
