#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    int num1,num2;
    char opcao;


    printf("Digite um valor: ");
    scanf("%d",&num1);

    printf("Digite outro valor: ");
    scanf("%d",&num2);

    printf("OPERA�OES > [+ - * /]\n");
    printf("Qual opera�ao deseja?: ");
    scanf(" %c",&opcao);

    switch (opcao){
        case '+':
            printf("o valor %d + %d �: %d",num1,num2,num1+num2);
        break;

        case '-':
            printf("O valor de %d - %d �: %d ",num1,num2,num1-num2);
        break;

        case '*':
            printf("O valor de %d * %d �: %d ",num1,num2,num1*num2);
        break;

        case '/':
            printf("O valor de %d / %d �: %.2f",num1,num2,(float)num1/num2);
        break;


    }





}
