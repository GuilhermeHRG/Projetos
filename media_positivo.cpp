/*17. Fazer um programa no qual o usu�rio vai entrando sucessivamente com valores
positivos. Quando o usu�rio entrar com um valor negativo o programa p�ra de
pedir valores e calcula a m�dia dos valores j� fornecidos.*/
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vh=0, sm=0,qtd=0, num=0;
    float md;
    printf("digite um valor positivo ou um negativo para sair: ");
        scanf("%d",&num);
    while(num>0){
        printf("digite um valor positivo ou um negativo para sair: ");
        scanf("%d",&num);
        if(num>-1)
        {
        qtd++;
        sm=sm+num;
    }

    }
printf("%d",sm);
printf("%d",qtd);
md=sm/qtd;
printf(" a m�dia � :%.2f",md);


}
