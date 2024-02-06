#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int num [20];
    int maior = 0;
    int menor = num[0];
    int posmaior = 0,posmenor = 0;

    for(int i=0;i < 20;i++){
        cout <<"["<<i +1<<"]"<< "Digite o valor "<<i+1<<": ";
        cin >> num[i];
    }

    for(int i = 0; i < 20; i++){
        if (num[i]>maior){
            maior = num[i];
            posmaior = i+1;
        }
        }
    cout <<"O maior numero é "<<maior<<"e a posição> "<<posmaior<<endl;

      for(int i = 0; i < 20; i++){
        if (num[i] < menor){
            menor = num[i];
            posmenor = i+1;
         }
        }

    cout <<"menor numero é "<<menor<<"e a posiçao> "<<posmenor<<endl;
    return 0;
}
