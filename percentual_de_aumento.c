//Código                 Cargo                    Percentual do Aumento
//                 
// 1                     Servente                       40%
                                                      
// 2                     Pedreiro                       35%
                          
// 3                   Mestre de Obras                  20%
          
// 4                  Técnico de Segurança              10%
                 
# include<stdio.h>
int main()
{
    float sal,sal_novo,sal_acrescimo;
    int code;
    printf("digite seu codigo e em seguida o seu salario: \n");
    scanf("%d%f",&code ,&sal);
    if(code==1){
      printf("CODIGO 01-SERVENTE\n");
      sal_acrescimo = sal *0.40;
      sal_novo = sal_acrescimo + sal;
      printf("O valor do aumento do seu salario é: %.2f \n",sal_acrescimo);
      printf("E o seu novo salario é : %.2f \n ",sal_novo);
    }else if(code==2){
      printf("CODIGO 02-PEDREIRO\n");
      sal_acrescimo = sal *0.35;
      sal_novo = sal_acrescimo + sal;
      printf("O valor do aumento do seu salario é: %.2f \n",sal_acrescimo);
      printf("E o seu novo salario é : %.2f \n ",sal_novo);
    }else if(code==3){
      printf("CODIGO 03-MESTRE DE OBRAS \n");
      sal_acrescimo = sal *0.20;
      sal_novo = sal_acrescimo + sal;
      printf("O valor do aumento do seu salario é: %.2f \n",sal_acrescimo);
      printf("E o seu novo salario é : %.2f \n ",sal_novo);
    }else if(code==4){
      printf("CODIGO 04-TECNICO DE SEGURANÇA\n");
      sal_acrescimo = sal *0.10;
      sal_novo = sal_acrescimo + sal;
      printf("O valor do aumento do seu salario é: %.2f \n",sal_acrescimo);
      printf("E o seu novo salario é : %.2f \n ",sal_novo);
    } else{
        printf("Valor informado do codigo não consta,tente novamente");
    }
return 0;
}

