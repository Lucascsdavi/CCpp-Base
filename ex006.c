#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void main(){
    setlocale(LC_ALL,"");

    float n1,n2,n3,n4,n5;


    printf("Digite a nota do primeiro aluno: ");
    scanf("%f",&n1);
    printf("Digite a nota do segundo aluno: ");
    scanf("%f",&n2);
    printf("Digite a nota do terceiro aluno: ");
    scanf("%f",&n3);
    printf("Digite a nota do quarto aluno: ");
    scanf("%f",&n4);
    printf("Digite a nota do quinto aluno: ");
    scanf("%f",&n5);
    float a = (n1+n2+n3+n4+n5)/5;

    printf("A media dos alunos é %.2f",a);


}

