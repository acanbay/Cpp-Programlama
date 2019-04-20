/*
İsci problemleri cozen program

1. Kullanicidan ilk veriler alinir
2. Kullanicinin ne istedigi belirlenir 
3. Istege gore hesaplamalar yapilir ve sonuc ekrana bastirilir
*/
#include<iostream>
using namespace std;

int main(){
	double isci, y_isci, is, y_is, zaman, y_zaman;
	char secim;
	baslangic:
	//1
	cout << "Mevcut isci sayisi:" << endl;
	cin >> isci ;
	cout << "Yapilan toplam is:" << endl;
	cin >> is ;
	cout << "Gecen zaman:" << endl;
	cin >> zaman ;
	//2
	secenekler:
	cout << "Hesaplanmak istenen nedir?" << endl;
	cout << "a: Yeni isci sayisi" << endl;
	cout << "b: Yapilabilecek is miktari" << endl;
	cout << "c: Yeni isin yapilmasi icin lazim olan zaman" << endl;
	cin >> secim;
	
	switch(secim){
		case 'a':
			cout << "Yeni is miktari:" << endl;
			cin >> y_is ;
			cout << "Yapilmasi gereken sure:" << endl;
			cin >> y_zaman ;
			
			y_isci = y_is*isci*zaman/(y_zaman*is);
			cout << "Gerekli isci sayisi: " << y_isci << endl;
			goto son;
			
		case 'b':
			cout << "Yeni isci sayisi:" << endl;
			cin >> y_isci ;
			cout << "Yapilmasi gereken sure:" << endl;
			cin >> y_zaman ;
			
			y_is = is*y_isci*y_zaman/(isci*zaman);
			cout << "Yapilabilecek is miktari: " << y_is << endl;
			goto son;
			
		case 'c':
			cout << "Yeni is miktari:" << endl;
			cin >> y_is ;
			cout << "Yeni isci sayisi:" << endl;
			cin >> y_isci ;
			
			y_zaman = y_is*isci*zaman/(y_isci*is);
			cout << "Gerekli sure: " << y_zaman << endl;
			goto son;
			
		default:
			cout << "Yanlis Secim Yaptiniz!\a " << endl;
			cout << "Basa donmek icin e'ye basin." << endl;
			cin >> secim;
			
			switch(secim){
				case 'e':
					goto secenekler;
				default:
					break;
			}
			break;
	}
	son:
		
	cout << "\nYeni islem yapmak icin e'ye basiniz'" << endl;
	cin >> secim;	
	switch(secim){
		case 'e':
			goto baslangic;
		default:
			break;
	}
	return 0;
}
