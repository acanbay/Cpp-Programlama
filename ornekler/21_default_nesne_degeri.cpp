#include<iostream>
using namespace std;

class insan{
	public:
		double boy;
		double kilo;
		insan(){	// constructor: default deger atama
			boy=30;
			kilo=3;
		}
		insan(double b){	// constructor: tek parametreyi alip digerini default atama
			boy=b;
			kilo=3;
		}
		insan(double b, double k){	// constructor: iki parametreyi de belirleme
			boy=b;
			kilo=k;
		}
		~insan(){	// destructor: islem bittikten sonra yapýlacaklari gosterir
			cout<<"insan nesnesi kaldirildi!"<<endl; 	// 3 nesne yaratacagimizden 3u icin de calisir
		}
};

int main(){
	
	insan ali;
	insan veli(180);
	insan ahmet(170,68);
	cout<<"Ali'nin boyu "<<ali.boy<<" cm, kilosu "<<ali.kilo<<" kg'dir"<<endl;
	cout<<"Veli'nin boyu "<<veli.boy<<" cm, kilosu "<<veli.kilo<<" kg'dir"<<endl;
	cout<<"Ahmet'in boyu "<<ahmet.boy<<" cm, kilosu "<<ahmet.kilo<<" kg'dir"<<endl;
	cout<<endl;

	return 0;
}
