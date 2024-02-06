#include <iostream>

#include <stdlib.h>

#include <locale.h>

#include <conio.h>



#define NOTAS 5



using namespace std;



void pedeNotas(int a[NOTAS]){

    for(int i = 0; i < NOTAS; i++){

        cout << "Digite uma nota: ";

        cin >> a[i];

    }

}



void maiorNota(int a[NOTAS]){

    int j;

    for(int i = 0; i < NOTAS; i++){

        if(i == 0){

            j = a[i];

        }else{

            if(a[i] > j){

                j = a[i];

            }

        }

    }

    cout << "A maior nota encontrada foi: " << j << endl;

}



void menorNota(int a[NOTAS]){

    int j;

    for(int i = 0; i < NOTAS; i++){

        if(i == 0){

            j = a[i];

        }else{

            if(a[i] < j){

                j = a[i];

            }

        }

    }

    cout << "A menor nota encontrada foi: " << j << endl;

}


void media(int a[NOTAS]){

    int somaMedia = 0;

    for(int i = 0; i < NOTAS; i++){

        somaMedia = somaMedia + a[i];

    }

    int media = somaMedia/NOTAS;

    cout << "A média do aluno foi de: " << media << " valores." << endl;



    if(media >= 9.5){

        cout << "O aluno está aprovado" << endl;

    }else{

        cout << "O aluno está reprovado" << endl;

    }



}



void situacao(int a, int b){



}



int main(){

    setlocale(LC_ALL,"");



    int notas[NOTAS];



    pedeNotas(notas);

    maiorNota(notas);

    menorNota(notas);

    media(notas);



    return 0;

}
