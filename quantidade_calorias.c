//Prato
//Italiano 750 cal
//Japonês 342 cal
//Salvadoreno 545 cal

//Bebida
//Chá 30 cal
//Suco de laranja 80 cal
//Refrigerante 90 cal

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int calorias,prato,bebida,totalcalorias;
    printf("PRATO\n1 - italiano 750 cal\n2 - japones 342 cal\n3 - salvadoreno 545 cal\n");
    printf("Escolha um prato:");
    scanf("%d",&prato);
    if(prato==1)
    { 
       calorias=750;
       prato=calorias;
    }
    else
    {
       if(prato==2)
       {
           calorias=342;
           prato=calorias;
       }
       else
       {
           if(prato==3)
           {
               calorias=545;
               prato=calorias; 
           }

           
        }
    }

   
    printf("\nBEBIDA\n1 - Chá 30 cal\n2 - Suco de laranja 80 cal\n3 - Refrigerante 90 cal\n");
    printf("Escolha a opção da bebida: ");
    scanf("%d",&bebida);
    if(bebida==1)
    {
       calorias=30;
       bebida=calorias;
    }
    else
    {
         if(bebida==2)
         {
           calorias=80;
           bebida=calorias;
        }
        else
        {
           if(bebida==3)
           {
               calorias=90;
               bebida=calorias;
           }  
     
        } 
    }
    totalcalorias=prato+bebida;
    printf("Total de calorias é: %d\n", totalcalorias);
    return 0;
}

