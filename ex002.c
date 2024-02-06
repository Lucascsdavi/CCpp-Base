#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c;

    printf("Insira o valor de A: \n");
    scanf("%d", &a);

    printf("Insira o valor de B: \n");
    scanf("%d", &b);

    printf("Insira o valor de C: \n");
    scanf("%d", &c);


    if(a < (b+c) && b < (a+c) && c < (a+b)){
        printf("E um triangulo \n");
    } else {
        printf("Nao e um triagulo!");
    }

}
