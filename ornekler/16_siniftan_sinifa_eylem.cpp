#include<iostream>
using namespace std;

class yiyecek{
	public:
		double kalori;
		void isit(int sure){
			if(sure<60) kalori+=sure;
		}
};
class insan{
	public:
		double kilo;
		void isitye(yiyecek y, int sure){
			y.isit(sure);
			kilo+=y.kalori/7400;
		}
		void ye(yiyecek y){
			kilo += y.kalori/7400;		
		}
};
int main(){
	yiyecek sandvic;
	sandvic.kalori=200;
	
	insan ali, veli;
	ali.kilo=65;
	veli.kilo=65;
	
	ali.ye(sandvic);
	cout<<"Sandvic sonrasi Ali'nin yeni kilosu: "<<ali.kilo<<endl;

	veli.isitye(sandvic,50);
	cout<<"Sandvic sonrasi Veli'nin yeni kilosu: "<<veli.kilo<<endl;
}
