int main(void)
{
    int a=1;
    int num,dia,mes,ano,qnt;
    float pre,total=0;

    while(a!=0){
        printf("Digite o nÃºmero do pedido:\n ");
        scanf("%d",&num);
        if(num==0){
            break;
        }

        printf("Digite o dia do pedido: \n");
        scanf("%d",&dia);

        printf("Digite o mÃªs do pedido: \n");
        scanf("%d",&mes);

        printf("Digite o ano do pedido: \n");
        scanf("%d",&ano);

        printf("Digite o preÃ§o unitÃ¡rio do produto: \n");
        scanf("%f",&pre);

        printf("Digite a quantidade de produtos: \n");
        scanf("%d",&qnt);

        total = total+(pre*qnt);
    }
    
    printf("O total da compra foi de : %.2f ",total);
    
    return 0;
}
