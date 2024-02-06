#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a;

    printf("Digite o valor: ");
    scanf("%d",&a);
    printf("O sucessor de %d é %d\n",a,a+1);
    printf("O antecessor de %d é %d",a,a-1);



}
