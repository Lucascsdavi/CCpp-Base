#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");

    int a;

    printf("Digite um valor para saber se � par ou impar: ");
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("O numero %d � par",a);
    }else{
        printf("o numero %d � impar",a);
    }

}
