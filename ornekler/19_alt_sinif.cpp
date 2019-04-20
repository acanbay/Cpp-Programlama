#include<iostream>
using namespace std;

class insan{
	public:
		double boy;
		double kilo;
		char *adres;
	protected: 
		int yas;
		
};

class calisan : public insan{
	public:
		double maas;
		void zam(double x){
			maas+=x;
		}
		void setyas(int x){
			yas=x; //yas calisan grubu icin public davranacagindan veri cekilebilir.
		}
		int getyas(){
			return yas;
		}
};

int main(){
	calisan ali;
	ali.boy=171; // calisan sinifinda tanimlanmasina ragmen boyu da girilebiliyor.
	cout<<"Ali'nin boyu: "<<ali.boy<<endl;
	
	//ali.yas=25; //yapilamaz. insan sinifinin yas ogesi main icince private gibi davranir.
    ali.setyas(25);
	cout<<"Ali'nin yasi: "<<ali.getyas()<<endl;
	cout<<endl;
	
	ali.maas=1800;
	cout<<"Ali'nin maasi: "<<ali.maas<<endl;
	
	ali.zam(350);
	cout<<"Ali'nin zamdan sonraki maasi: "<<ali.maas<<endl;

	return 0;
}
