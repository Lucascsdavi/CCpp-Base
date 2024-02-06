#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    float nota1,nota2,nota3,nota4,nota5;

    printf("digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("digite a terceira nota: ");
    scanf("%f",&nota3);

    printf("digite a quarta nota: ");
    scanf("%f",&nota4);

    printf("digite a quinta nota: ");
    scanf("%f",&nota5);

    float media = (nota1+nota2+nota3+nota4+nota5)/5;


    if(media >= 9.5){
        printf("com a media de %.2f o aluno passou",media);
         if(media >16){
                printf("passou com %.2f e com maestria.",media);
         }
    }else if(media <8){
        printf("repovou com %.2f valores",media);

    }else{
        printf("recuperaçao com valores de %.2f",media);
    }

}

