#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<string.h>

void main(){
    setlocale(LC_ALL,"");

    srand(time(NULL));
    int e;
    int j1;
    int j2 = rand () %10+1;
    int opcao;
    int r;
    printf("----------------------------------------\nBEM VINDO AO JOGO DE IMPAR OU PAR\n----------------------------------------\n");

    while(1){
        printf("\nDigite 1 para seguir o jogo ou 0 para sair\n>");
        scanf("%d",&e);
        if (e == 0){
            printf("\aGame Over");
            break;
        }
        if ((e > 1)){
            printf("\aINVALIDO");
            break;
        }


        printf("digite um numero até 10: ");
        scanf("%d",&j1);
        if (j1 > 10){
            printf("\aINVALIDO");
        break;
        }

        printf("\nDigite [1] IMPAR ou [2]PAR?: ");
        scanf("%d",&opcao);
        if (opcao <1 || opcao >2){
            printf("\aINVALIDO");
        break;
        }

        r = j1+j2;

        if (opcao == 2 && (r % 2 == 0)) {
            printf("O computador digitou %d.\n", j2);
            printf("A soma entre %d e %d é [%d] par.\n",j1,j2,r);
            printf("Você venceu!\n");

        } else if (opcao == 1 && (r % 2 != 0)) {
            printf("O computador digitou %d.\n", j2);
            printf("A soma entre %d e %d é [%d] ímpar.\n",j1,j2,r);
            printf("Você venceu!\n");

        } else {
            printf("O computador digitou %d.\n", j2);
            printf("A soma entre %d e %d é [%d] %s .\n",j1,j2,r, (r % 2 == 0) ? "par" : "ímpar");
            printf("Você perdeu!\n");
        }
    }

}

