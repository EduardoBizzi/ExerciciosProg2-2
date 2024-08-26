#include <iostream>
#include <ctime>
using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x, num;
 
	bom_dia();
	cout << aleat() << endl;
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}

void bom_dia(){
    cout << "Bom Dia!!!" << endl;
}

int aleat(){
    srand(time(NULL));
    return (rand()%20);
}

int dobro(int x){
    return (x*x);
}

void mostra_dobro(int x){
    cout << x*x << endl;
}