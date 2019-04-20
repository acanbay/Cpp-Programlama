#include<iostream>
#define _USE_MATH_DEFINES // Matematik sabitleri
#include<cmath> // Matematik fonksiyonlari
using namespace std;

int main(){
	int r;
	cout << "Cemberin yaricapini giriniz..." <<endl;
	cin >> r;
	cout << "Cemberin Cevresi: " << 2*M_PI*r << endl;
	cout << "Cemberin Alani: " << M_PI*pow(r,2) << endl;
	return 0;
}
