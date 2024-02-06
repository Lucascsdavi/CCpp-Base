#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");


    int n;

    printf("itroduza o valor para tabuada: ");
    scanf("%d",&n);

    for (int i = 0;i <=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }


}
