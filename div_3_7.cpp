#include<stdio.h>
#include<locale.h>

int main()
{
    printf("BEM VINDO!");
    printf("\n----------------------------------------");
  setlocale(LC_ALL,"");
  int a, b;
  printf("\nDIGITE O VALOR DE A: ");
scanf("%d",&a);
printf("\nDIGITE O VALOR DE B: ");
scanf("%d",&b);
if (a%3==0 && b%3==0 && a%7!=0 && b%7!=0)
{
    printf("\n-------------------------------------------------");
    printf("\nA E B S�O DIVIS�VEIS SOMENTE POR 3 .");
}
else
if (a%7==0 && b%7==0 && a%3!=0 && b%3!=0)
{
    printf("\n--------------------------------------------------");
    printf("\nA E B S�O DIVIS�VEIS SOMENTE POR 7");
}
else
if (a%7==0 && b%7!=0 && a%3!=0 && b%3==0)
{
    printf("\n-------------------------------------------------");
    printf("\nA � DIVIS�VEL SOMENTE POR 7 E B SOMENTE POR 3.");
}
else
if (a%7!=0 && b%7==0 && a%3==0 && b%3!=0)
{
    printf("\n-------------------------------------------------");
  printf("\nA � DIVIS�VEL SOMENTE POR 3 E B SOMENTE POR 7.");
}
printf("\n----------------------------------------------------");
}











