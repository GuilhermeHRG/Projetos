#include<stdio.h>
#include<locale.h>

int main ()
{
    printf("BEM VINDO!!");
    printf("\n-------------------------------------------");
    setlocale(LC_ALL,"");
    int num, div;
    printf("\nDigite um n�mero: ");
    scanf("%d",&num);
    printf("\nDigite o divisor: ");
    scanf("%d",&div);
    if(num%div==0)
{
    printf("\n-------------------------------------------");
printf("\nO n�mero %d � divis�vel por %d. ",num,div);
}

else
{
    printf("\n-------------------------------------------");
printf("\nO n�mero %d n�o � divis�vel por %d. ",num,div);
}

printf("\n-------------------------------------------");
}
