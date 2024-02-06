#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");


    int num1;


    printf("Digite a primeira nota: ");
    scanf("%d",&num1);

    switch(num1){

    case 0 ... 5:
        printf("muito insuficiente.");
    break;

    case 6 ... 9:
        printf("insuficiente.");
    break;

    case 10 ... 13:
        printf("suficiente.");
    break;

    case 14 ... 17:
        printf("Bom");
    break;

    case 18 ... 19:
        printf("muito bom.");
    break;

    case 20:
        printf("excelente.");
    break;

    default:
        printf("Dados invalidos.");
    break;


    }






}
