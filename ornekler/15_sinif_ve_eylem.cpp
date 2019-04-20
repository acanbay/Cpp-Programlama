#include<iostream>
using namespace std;

class dikdortgen{
	public:
		double en;
		double boy;
		double cevre(){
			return 2*(en+boy);
		}
		double alan(){
			return en*boy;
		}
};

int main(){
	dikdortgen d1, d2;
	d1.en=50;
	d1.boy=100;
	d2.en=150;
	d2.boy=200;
	cout<<"1. dikdortgenin cevresi: "<<d1.cevre()<<" alani: "<<d1.alan()<<endl;
	cout<<"2. dikdortgenin cevresi: "<<d2.cevre()<<" alani: "<<d2.alan()<<endl;
}

