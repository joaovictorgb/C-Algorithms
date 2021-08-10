#include <stdio.h>
int main ()
{
int a, b, c, res=1;
printf("Digite um numero: ");
scanf("%d", &a);
printf("Digite um segundo numero: ");
scanf("%d", &b);
c=b;
while (b>0)
   {
        res=res*a;
        b--;
   }
printf("%d elevado a %d é: %d",a,c,res);
return 0;
}
