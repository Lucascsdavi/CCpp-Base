#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");


     int num;


     printf("Digite um numero da semana: ");
     scanf("%d",&num);

     switch (num){
        case 1:
            printf("Domingo");
        break;

        case 2:
            printf("Segunda-feira");
        break;

        case 3:
            printf("Terça-feira");
        break;

        case 4:
            printf("quarta-feira");
        break;

        case 5:
            printf("Quinta-feira");
        break;

        case 6:
            printf("Sexta-feira");
        break;

        case 7:
            printf("Sabado");
        break;

        default:
            printf("invalido");

     }




}
