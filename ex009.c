#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    //declarar variaveis
    int velocidade, multa = 100, velmax = 80 ;

    //ler a velocidade
    printf("digite a velocidade: ");
    scanf("%d", &velocidade);

    //declarar o valor da multa final
    int multatotal = multa + 7 *(velocidade - velmax);


    //testar a velocidade para ver se excedeu
    if(velocidade > velmax){
        printf("multa");

    }else{
        printf("boa viagem");

    }



}
