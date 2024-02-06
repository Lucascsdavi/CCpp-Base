#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");

    //declararar variaveis de utilizador
    int a,b;
    //declarar variaveis de preço
    int custodia = 60;
    float custokm = 0.456;
    //ler dados do utilizador
    printf("Quantos dias foi alugado?: ");
    scanf("%d",&a);

    printf("Quantos Km fez?: ");
    scanf("%d",&b);

    printf("A diaria do carro fica por %d EUROS\n",a*custodia);
    printf("Os km ficou em %.2f EUROS\n",b*custokm);
    //declarar variavel da conta final
    float c = (a*custodia)+(b*custokm);
    //declarar a soma
    printf("A soma total da conta é %.2f EUROS",c);



}
