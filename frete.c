// ***Código Estado***
 //                   *** Percentual do Imposto**
//1
//                =                20
//2
//                 =               15
//3
//                 =               10
//4
//               =                 5

//Código da Carga
                         //Preço por Kg
//10 a 20
//               =             180
//21 a 30
//               =             120
//31 a 40
//             =               230

#include<stdio.h>
int main(){
    int codigoestado,codigocarga;
    float pesokg,pesot,precocarga,valorimposto;
    float valortotal;
      printf("Qual o codigo do estado:  ");
         scanf("%d",&codigoestado);
      printf("o peso da carga:  ");
         scanf("%f",&pesokg);
      printf("codigo da carga:  ");
         scanf("%d",&codigocarga);
      if (codigocarga>=10 && codigocarga <= 20 ){
        	 precocarga = pesokg *180;
      }if (codigocarga>=21 && codigocarga <= 30 ){
         	 precocarga = pesokg *120;
	  }if (codigocarga>=31 && codigocarga <= 40 ){
         	 precocarga = pesokg *230;
     }else 
	     printf("O preco da carga e= %.2f\n",precocarga);
      if (codigoestado=1 ){
        	 valorimposto = precocarga *35 / 100;
      }if (codigoestado=2 ){
        	 valorimposto = precocarga *25 / 100;
	  }if (codigoestado=3 ){
        	 valorimposto = precocarga *15 / 100;
	  }if (codigoestado=4 ){
        	 valorimposto = precocarga * 5 / 100;
      }if(codigoestado <=0 && codigoestado>=5 ){
      	     valorimposto= precocarga *0;
	  }
              
	 printf("o valor do imposto e:%.2f\n", valorimposto);
	valortotal= precocarga + valorimposto;
	 printf("O valor total e :%.2f\n",valortotal);
return 0;
}
