#include<iostream>
using namespace std;

class cubuk{
	public:
		double boy;
		cubuk operator+(const cubuk& x){
			cubuk ekleme;
			ekleme.boy=this->boy+x.boy;
			return ekleme;
		}
};

int main(){
	
	cubuk a,b;
	a.boy=25;
	b.boy=30;
	cubuk toplam = a+b;
	cout<<"Cubuklarin toplam uzunlugu: "<<toplam.boy<<endl;

	return 0;
}
