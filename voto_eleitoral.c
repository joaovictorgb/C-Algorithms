#include<stdio.h>
int main(){
	int idade;
      printf("Qual a sua idade:\n  ");
         scanf("%d",&idade);
       if (idade>=0 && idade<16 ){
           printf("\nCaro eleitor ,sua idade e %.d anos,e voce ainda nao estar apto ao voto. ",idade);
       }if (idade>=16 && idade<18 ){
           printf("\nCaro eleitor ,sua idade e %.d anos,voce vota se desejar,nao e obrigatorio. ",idade);
       }if (idade>=18 && idade<=65 ){
           printf("\nCaro eleitor ,sua idade e %.d anos,e seu voto e obrigatorio. ",idade);
	   }if (idade>65  ){
           printf("\nCaro eleitor ,sua idade e %.d anos,e seu voto nao e obrigatorio,voce ja contribuiu bastante com o pais. ",idade);
	   }if (idade<0 ){
           printf("\nCaro ineleitor ,por nao existir, nao estara apto ao voto. ",idade);
	   }
  return 0;
}
 
