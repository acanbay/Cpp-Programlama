#include<iostream>
using namespace std;

class insan{
	public:
		double kilo;
		double boy;
		void maasBelirle(double d){
			maas+=d;
		}
		void maasBastir(){
			cout<<"Maas: "<<maas<<endl;
		}
	private:
		double maas;
};
int main(){
	insan ali;
	ali.kilo=64.5;
	ali.boy=175;
	//ali.maas=1500 komutu maas private oldugundan calismaz!
	ali.maasBelirle(1500);
	//cout<<"Maas: "<<ali.maas<<endl; komutu da maasin private olmasindan dolayi calismaz!
	ali.maasBastir();
	return 0;
}
