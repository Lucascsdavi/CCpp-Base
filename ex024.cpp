#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"");

    for (int i = 0; i < 11;i++){
        cout <<i<<endl;
    }
    return 0;
}
