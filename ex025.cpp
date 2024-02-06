#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");

    int nota[5];
    int soma = 0;

    printf("Avaliações!");


    for(int i = 0; i < 5; i++){
    cout << "Insira a sua nota " << i + 1 << ": " ;
    cin >> nota[i];
    soma = soma + nota[i];
    }
    float media = (float)soma/5;


    if(media >= 9.5 ){
            printf("\n  Aprovado! Com média de %.2f \n\n", media);
    }else if(media <=8 ){
            printf("\n  Reprovado! Com média de %.2f \n\n", media);
    }else{
            printf("\n  Recuperação! Com média de %.2f \n\n", media);
    }



    return 0;
}
