#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");

    int nasc,ano;

    printf("Digite o ano de nascimento: ");
    scanf("%d",&nasc);
    printf("Digite o ano atual: ");
    scanf("%d",&ano);
    printf("A idade do utilizador é %d anos.",ano-nasc);




}
