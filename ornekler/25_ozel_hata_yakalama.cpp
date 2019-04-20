#include<iostream>
#include <math.h>
using namespace std;

class istisna:public exception{	// Hata tanýmlama
	public:
		string hata(){
			return "Sifira bolum hatasi!!";
		}
};

class insan{
	public:
		double boy;
		double kilo;
		double boykilo(){
			if(kilo==0){
    			throw istisna();
			}
			else {
				return boy/kilo;
			}
		}
};

int main(){
	insan ali;
	ali.boy=178;
	ali.kilo=0;
	try{
		cout<<"Ali'nin boy/en oraný: "<<ali.boykilo()<<endl;
	}catch (istisna i){
		cout<<i.hata()<<endl;
		cout<<endl;
	}
    return 0;
}
