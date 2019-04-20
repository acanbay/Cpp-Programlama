#include<iostream>
#include <math.h>
using namespace std;

class insan{
	public:
		double boy;
		double kilo;
		double boykilo(){
			if(kilo==0){
    			throw exception();
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
		cout<<"Ali'nin boy/en oraný: "<<ali.boykilo()<<endl;	// kilo 0 oldugundan bolum yapilamaz
	}catch (exception i){
		cout<<"Genel bir hata olustu!"<<endl;
	}
    return 0;
}
