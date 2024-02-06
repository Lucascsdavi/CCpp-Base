#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>


void main(){
    setlocale(LC_ALL,"");

    srand(time(NULL));
    int j1;
    int j2 = rand()%3+1;
    system("COLOR 03");
    printf("====================\n[1] PEDRA\n[2] PAPEL\n[3] TESOURA\n====================\n");
    printf("Digite o jogo: ");
    scanf("%d" ,&j1);


    if(j1>3||j1<1){
        printf("ERROR");
    }

    else if (j1 >= 1 && j1 <= 3 && j2 >= 1 && j2 <= 3){
            printf("COMPUTADOR: %d\n\n",j2);
        if (j1 != j2){

            if( ( j1 == 1 && j2 == 3) || (j1 == 2 && j2 == 1) || (j1 == 3 && j2 ==2)){
                printf("JOGADOR  ganhou\n",j1);
            }else{
                printf("COMPUTADOR ganhou\n",j2);
            }
        }else{
            printf("EMPATE");
        }
    }

}
