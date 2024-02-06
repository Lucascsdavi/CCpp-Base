#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");


    float num1;
    float num2;
    float resultado=num1+num2;

    printf("Digite o valor: ");
    scanf("%f",&num1);
    printf("Digite outro valor: ");
    scanf("%f",&num2);
    printf("A Soma entre os valores %2.f e %2.f é %2.f",num1,num2,resultado);

}
