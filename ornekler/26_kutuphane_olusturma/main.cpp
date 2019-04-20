#include<iostream>
#include "dikdortgen.h"
using namespace std;

int main(){
	dikdortgen d;
	d.SetBoy(20.);
	d.SetEn(45.);
	cout<<"Kisa kenari "<<d.GetEn()<<" ve uzun kenari "<<d.GetBoy()<<" olan dikdortgenin alani: "<<d.Alan()<<endl;
	return 0;	
}
