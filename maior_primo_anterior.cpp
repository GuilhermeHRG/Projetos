/*Escrever um programa para ler um n�mero inteiro do usu�rio e exibir o maior
n�mero primo que seja menor do que o n�mero digitado.*/
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, c=0, n1, n2;
    printf("insira um n�mero: ");
    scanf("%d",&num);
    for (int n1=num-1; n1>=1; n1--)
    {
        for(int n2=2; n2<n1; n2++){
        if(n1%n2==0)
        c++;
        }
         if(c==0)
        {
         if(n1==1)
        {
            printf("n�o tem nenhum n�mero primo pr�ximo.");
            break;
        }
        printf(" o primo anterior � %d ",n1);
        break;
        }
        c=0;
    }
return 0;
}
