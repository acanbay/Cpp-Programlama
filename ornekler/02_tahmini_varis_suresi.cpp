/* Kullanicidan gidilecek mesafe ve aracin hizi alinarak tahmini varis suresi hesaplanacak
1. Kullanicidan bilgiler alinir
2. Saat dakika donusumleri yapilir
3. Tahmini varis suresi kullaniciya bastirilir
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int yol,hiz;
	//1
	cout<<"Mesafeyi giriniz"<<endl;
	cin>>yol;
	cout<<"Hizi giriniz"<<endl;
	cin>>hiz;
	//2
	int saat =yol/hiz;
	int dakika = ((float)yol/hiz-(int)yol/hiz)*60; // Virgulden sonraki bolumler dakikaya cevirilir
	//3
	cout<<"Tahmini varis sureniz: "<<endl;
	cout<<saat<<" saat ve "<<dakika<<" dakikadir."<<endl;	
	return 0;
}
