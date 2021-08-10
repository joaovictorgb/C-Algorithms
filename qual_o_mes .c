#include <stdio.h>
int main(void)
{

 int mes;
 
printf("Digite o numero inteiro para fornecermos o mes: ");
scanf ("%d",& mes);
      if(mes==1){
             printf("\nJANEIRO\n");
             }
      if (mes==2){
             printf ("\nFEVEREIRO\n");
             }
      if(mes==3){
             printf("\nMARÇO\n");
             }
      if (mes==4){
             printf ("\nABRIL\n\n");
             }
      if(mes==5){
             printf("\nMAIO\n");
             }
      if (mes==6){
             printf ("\nJUNHO\n");
             }
      if(mes==7){
             printf("\nJULHO\n");
             }
      if (mes==8){
             printf ("\nAGOSTO\n\n");
             }
      if(mes==9){
             printf("\nSETEMBRO\n");
             }
      if (mes==10){
             printf ("\nOUTUBRO\n");
             }
      if(mes==11){
             printf("\nNOVEMBRO\n");
             }
      if (mes==12){
             printf ("\nDEZEMBRO\n\n");          
        }
      if  (mes>12)
             printf ("\n Não Corresponde a um mês\n\n");
      if  (mes<1)
             printf ("\n Não Corresponde a um mês\n\n");  
        
    return 0;

          }
