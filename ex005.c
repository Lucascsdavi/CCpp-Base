//soma,multiplicaçao,subtraçao,divisao,resto
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");

    int num1,num2;



    printf("digite o primeiro valor :");
    scanf("%d",&num1);
    printf("digite o segundo valor :");
    scanf("%d",&num2);
    printf("o valor da SOMA é :%d\n",num1+num2);
    printf("o valor da MULTIPLICAÇAO é :%d\n",num1*num2);
    printf("o valor da SUBTRAÇÃO é :%d\n",num1-num2);
    printf("o valor da DIVISAO é :%d\n",num1/num2);
    printf("o valor do RESTO é :%d\n",num1%num2);

}
