//soma,multiplica�ao,subtra�ao,divisao,resto
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
    printf("o valor da SOMA � :%d\n",num1+num2);
    printf("o valor da MULTIPLICA�AO � :%d\n",num1*num2);
    printf("o valor da SUBTRA��O � :%d\n",num1-num2);
    printf("o valor da DIVISAO � :%d\n",num1/num2);
    printf("o valor do RESTO � :%d\n",num1%num2);

}
