#include <iostream>
#include <ctime>
using namespace std;

int gerarNumeroAleatorio();

int main(){
    cout <<"Numero aleatorio gerado de 1 a 100: " << gerarNumeroAleatorio << endl;
}

int gerarNumeroAleatorio(){
    srand(time(NULL));
    return (rand()%100)+1;
}