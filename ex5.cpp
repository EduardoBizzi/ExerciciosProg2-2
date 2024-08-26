#include <iostream>
using namespace std;

double calcularAreaRetangulo(double,double);

int main(){
    double x, y;

    cin >> x >> y;
    cout << "Area do retangulo: " << calcularAreaRetangulo(x,y) << endl;
}

double calcularAreaRetangulo(double x,double y){
    double area;

    area = x * y;
    return area;
}