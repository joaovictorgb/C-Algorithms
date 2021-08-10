//Mensalidade por idade
//Até 18 anos
//                     =         R$ 50,00
//De 19 a 29 anos
//                     =         R$ 70,00
//De 30 a 45 anos
//                     =         R$ 90,00
//De 46 a 65 anos
//                     =         R$ 130,00
//Acima de 65 anos
//                     =         R$ 170,00

#include<stdio.h>
int main(){
    char nome[30];
	int idade;
      printf("Qual seu nome: \n ");
         scanf("%[^\n]",& nome);
      printf("Qual a sua idade:\n  ");
         scanf("%d",&idade);
       if (idade>=0 && idade<=18 ){
           printf("\n%s,sua idade e %.d anos,e o valor a ser pago pelo plano e :R$:50,00 ",nome,idade);
       }if (idade>=19 && idade<=29 ){
           printf("%s,sua idade e %d e o valor a ser pago pelo plano e :R$:70,00 ",nome,idade);
       }if (idade>=30 && idade<=45 ){
           printf("%s,sua idade e %d e o valor a ser pago pelo plano e :R$:90,00 ",nome,idade);
       }if (idade>=46 && idade<=65 ){
           printf("%s,sua idade e %d e o valor a ser pago pelo plano e :R$:130,00 ",nome,idade);
	   }if (idade>=65  ){
           printf("%s,sua idade e %d e o valor a ser pago pelo plano e :R$:170,00 ",nome,idade);
	   }if (idade<1 ){
           printf("%s,sua idade e %d ,voce precisa nascer,para se enquadrar nesse plano e comecar a pagar:R$:50,00\n Aguardamos seu nascimento!",nome,idade);
	   }
  return 0;
}
