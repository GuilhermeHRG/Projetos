#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float ld, a;
    int op;
    printf("PARA CALCULAR A �REA DE TRIANGULO(3)\n\nPARA CALCULAR A �REA DE QUADRADO(4)\n\nPARA CALCULAR A �REA DE HEX�GONO(6) \n");
    printf("\ndigite a op��o: ");
    scanf("%d",&op);
    if(op!=4 && op!=3 && op!=6){
        printf("N�o pode digitar n�meros al�m de 3, 4 e 6\nFechando programa...");
    }
    else{
    switch(op){
case 3:
    printf("digite o tamando do lado: ");
    scanf("%f",&ld);
    a=ld*ld*1.73/4;
    printf("a �rea eh: %.2f",a);
    break;
case 4:
    printf("digite o tamando do lado: ");
    scanf("%f",&ld);
    a=ld*ld;
    printf("a �rea eh: %.2f",a);
    break;
case 6:
    printf("digite o tamando do lado: ");
    scanf("%f",&ld);
    a=6*ld*ld*1.73/4;
    printf("a �rea eh: %.2f",a);
    break;

    }
    }
}
