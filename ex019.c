#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    // numeros primos dividido por 1 e ele mesmo.
    int n,i,result = 0;

    printf("Digite um valor: ");
    scanf("%d",&n);

    for ( i = 2; i <= n / 2; i++){
        if (n % i == 0){
            result++;
            break;
        }
     }
    if (result == 0)
        printf("%d é numero primo\n",n);
    else
        printf("%d  numero nao é primo\n",n);
}
