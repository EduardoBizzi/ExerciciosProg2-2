#include <iostream>
using namespace std;

int x;

int modificador(int);

int main(){
    cin >> x;

    cout << modificador(x) << endl;
}

int modificador(int x){
    int y, maior;

    cin >> y;
    if(y > x){
        int z;
        cin >> z;
        maior = z;
    }
    else{
        maior = x;
    }
    return maior;
    
}