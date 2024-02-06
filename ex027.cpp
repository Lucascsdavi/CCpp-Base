#include <iostream>

#include <locale.h>

#include <time.h>

#include <vector>



#define TAM 5



using namespace std;



void separador(){

    cout << "____________________________________" << endl;

    cout << endl;

}



int main(){



    setlocale(LC_ALL,"");

    srand((unsigned)time(NULL));



    int juizes[TAM];

    int somaNotas = 0, piorNota, notasOito = 0;

    vector<int> melhoresJuizes;



    for(int i = 0; i < TAM; i++){

        juizes[i] = rand() % 11;

        somaNotas = somaNotas + juizes[i];





        if(i == 0){

            piorNota = juizes[i];

        }else{



            if(juizes[i] < piorNota){

                piorNota = juizes[i];

            }

        }



        if(juizes[i] >= 8){

            notasOito++;

        }

    }





    int melhorNota = juizes[0];

    for(int i = 1; i < TAM; i++){

        if(juizes[i] > melhorNota){

            melhorNota = juizes[i];

        }

    }

    for(int i = 0; i < TAM; i++){

        if(juizes[i] == melhorNota){

            melhoresJuizes.push_back(i + 1);

        }

    }



    float media = (float)somaNotas / TAM;

    float percentagem = (float)notasOito * 100 / TAM;



    for(int i = 0; i < TAM; i++){

        printf("O juiz %d deu a nota %d\n", i + 1, juizes[i]);

    }

    cout << endl;

    cout << endl;

    printf(">> A média de pontuação obtida pelo atleta foi de %.2f\n", media);

    separador();

    printf(">> A melhor nota obtida foi: %d\n", melhorNota);

    separador();

    printf(">> A pior nota obtida foi: %d\n", piorNota);

    separador();

    printf(">> A percentagem de pontuações iguais ou superiores a 8 é de: %.2f%%\n", percentagem);

    separador();

    cout << ">> As melhores notas foram atribuídas pelos juízes: ";

    for(int i = 0; i < melhoresJuizes.size(); i++){

        cout << melhoresJuizes[i];

        if(i != melhoresJuizes.size() - 1){

            cout << ", ";

        }

    }

    cout << endl;

    separador();



    return 0;

}
