#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int yol,hiz;
	cout<<"Mesafeyi giriniz"<<endl;
	cin>>yol;
	cout<<"Hizi giriniz"<<endl;
	cin>>hiz;
	cout<<"Tahmini varis sureniz: "<<endl;
	int saat =yol/hiz;
	int dakika = ((float)yol/hiz-(int)yol/hiz)*60;
	cout<<saat<<" saat ve "<<dakika<<" dakikadir."<<endl;	
	return 0;
}
