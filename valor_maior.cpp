#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int a, b, c, d;
    printf("----------------------------");
    printf("\nBEM-VINDO!!");
    printf("\n----------------------------");
    printf("\nDIGITE O VALOR DE A: ");
    scanf("%d",&a);
    printf("\nDIGITE O VALOR DE B: ");
    scanf("%d",&b);
    printf("\nDIGITE O VALOR DE C: ");
    scanf("%d",&c);
    printf("\nDIGITE O VALOR DE D: ");
    scanf("%d",&d);
    printf("\n----------------------------");
    if (a>b,a>c,a>d){
        printf("\nA � O MAIOR N�MERO.",a);
    }
    else if(b>a,b>c,b>d){
        printf("\nB � O MAIOR N�MERO.",b);
    }
    else if(c>a,c>b,c>d){
        printf("\nC � O MAIOR N�MERO.",c);
    }
    else if(d>a,d>b,d>c){
        printf("\nD � O MAIOR N�MERO.",d);
    }
    else if(a==b,a==c,a==d){
        printf("\nTODOS OS N�MEROS S�O IGUAIS.");
    }
    if (a<b,a<c,a<d){
        printf("\n\nA � O MENOR N�MERO.");
    }
    else if(b<a,b<c,b<d){
        printf("\n\nB � O MENOR N�MERO.");
    }
    else if (c<a,c<b,c<d){
        printf("\n\nC � O MENOR N�MERO.");
    }
    else if (d<a,d<b,d<c){
        printf("\n\nD � O MENOR N�MERO.");
    }
printf("\n----------------------------");
printf("\nCREATED BY GUILHERME ;)");
printf("\n----------------------------\n");
    }

