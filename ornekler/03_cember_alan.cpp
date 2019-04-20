/*
1. Kullanicidan yaricap bilgisi alinir
2. Cemberin cevresi ve yaricapi ekrana bastirilir
*/
#include<iostream>
#define _USE_MATH_DEFINES // Matematik sabitleri
#include<cmath> // Matematik fonksiyonlari
using namespace std;

int main(){
	int r;
	//1
	cout << "Cemberin yaricapini giriniz..." <<endl;
	cin >> r;
	//2
	cout << "Cemberin Cevresi: " << 2*M_PI*r << endl;  // M_PI, cmath kutuphanesinden gelen pi sayisini veren tanimdir
	cout << "Cemberin Alani: " << M_PI*pow(r,2) << endl;
	return 0;
}
