#include <stdio.h>
int main ()
{
float dolar,cotacao,reais;
     printf("Insira o valor da cotacao em dolar: \n");
     scanf("%f", & cotacao);
     printf("Insira o valor em reais: \n");
     scanf("%f", & reais);
    dolar=cotacao *reais;
     printf("O valor em dólares é: \n%.2f", dolar);
return 0;
}
