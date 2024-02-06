#include <iostream>

#include <cstdlib>

#include <time.h>

#include <iomanip>



#define TAM 5

#define NUM_ALUNOS 3



using namespace std;



int main() {

    setlocale(LC_ALL,"");

    srand(time(0));



    int notas[NUM_ALUNOS][TAM];

    int maiorNota = 0, menorNota = 20;

    float mediaAluno[NUM_ALUNOS] = {0};

    float mediaExercicio[TAM] = {0};

    int melhorAluno = 0, piorAluno = 0;





    for (int i = 0; i < NUM_ALUNOS; i++) {

        cout << "Notas do Aluno " << i+1 << ": | ";

        for (int j = 0; j < TAM; j++) {

            notas[i][j] = rand() % 21;

            cout << notas[i][j] << " | ";





            if (notas[i][j] > maiorNota) {

                maiorNota = notas[i][j];

            }

            if (notas[i][j] < menorNota) {

                menorNota = notas[i][j];

            }





            mediaAluno[i] += notas[i][j];





            mediaExercicio[j] += notas[i][j];

        }

        cout << endl;

    }





    for (int i = 0; i < NUM_ALUNOS; i++) {

        mediaAluno[i] /= TAM;

    }




    for (int i = 0; i < TAM; i++) {

        mediaExercicio[i] /= NUM_ALUNOS;

    }




    for (int i = 1; i < NUM_ALUNOS; i++) {

        if (mediaAluno[i] > mediaAluno[melhorAluno]) {

            melhorAluno = i;

        }

        if (mediaAluno[i] < mediaAluno[piorAluno]) {

            piorAluno = i;

        }

    }





    cout << fixed << setprecision(2);



    cout << endl;

    cout << "Maior nota: " << maiorNota << endl;

    cout << "Menor nota: " << menorNota << endl;

    cout << endl;



    cout << "Média de cada aluno:" << endl;

    for (int i = 0; i < NUM_ALUNOS; i++) {

        cout << "Aluno " << i+1 << ": " << mediaAluno[i] << endl;

    }



    cout << endl;

    cout << "Média por exercício:" << endl;

    for (int i = 0; i < TAM; i++) {

        cout << "Exercício " << i+1 << ": " << mediaExercicio[i] << endl;

    }



    cout << endl;

    cout << "Melhor aluno: Aluno " << melhorAluno+1 << endl;

    cout << "Pior aluno: Aluno " << piorAluno+1 << endl;



    return 0;

}
