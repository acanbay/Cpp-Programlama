/*
Kullanicidan alinan sayilarin ortalamasini bulan program
*/
#include<iostream>
using namespace std;
int main(){
	int sayi=0;
	double okunan=0;
	double toplam=0;
	for(int i=0;okunan!=-1;i++){
		cout<<"Bir sayi giriniz (Cikmak icin -1 giriniz)"<<endl;
		cin>>okunan;
		toplam+=okunan;
		sayi++;
	}
	cout<<"Girilen sayilerin ortalamasi: "<<(toplam+1)/(sayi-1)<<endl;
}
