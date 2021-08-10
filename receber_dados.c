#include <stdio.h>

int main(void)
{
    int idade,somi=0,aux=0;
    float peso,somap=0,mediai,mediap;
    char sexo,civil;
    int cas=0,sol=0,sep=0,viu=0;

    //casadas, solteiras,separadas e viuvas

    while(idade!=0){
        printf("Digite a idade: \n");
        scanf("%d",&idade);
        
        if(idade==0){
            break;
        }
        somi = somi+idade;

        printf("Digite o peso : \n");
        scanf("%f",&peso);

        somap = somap+peso;

        printf("Digite o sexo (m ou f): \n");
        setbuf(stdin, NULL);
        scanf("%c",&sexo);

        printf("Digite o estado civil ('c' para casado/ 'c' p solteiro/ 'e' p separado/ 'v' p viÃºvo): \n");
        setbuf(stdin, NULL);
        scanf("%c",&civil);

        if (civil=='c'){
            cas = cas+1;
        }else if(civil=='s'){
            sol = sol+1;
        }
        else if(civil=='e'){
            sep = sep+1;
        }
        else if(civil == 'v'){
            viu = viu+1;
        }


        

        aux = aux +1;
    }
    mediai = (somi/aux);
    mediap = (somap/aux);

    printf("%d pessoas casadas. %d pessoas solteiras. %d separadas. %d viÃºvas \n",cas,sol,sep,viu);
    printf("A mÃ©dia de idade Ã© : %.2f\n",mediai);
    printf("A mÃ©dia de peso Ã© : %.2f\n",mediap);


    return 0;
}
