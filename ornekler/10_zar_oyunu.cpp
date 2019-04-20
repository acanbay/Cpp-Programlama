#include <iostream>
#include <time.h>
#include <cstdlib> // srand icin gerekli kutuphane
using namespace std;

int zar() {
   	return rand()%6+1;
}

int main() {
	srand(time(NULL));
   	int n,s1=0,s2=0;
   	int bahis,ek;
   	char secim;
     	
   	cout<<"Kac zar atilacak?"<<endl;
   	cin>>n;
   	cout<<"Ilk bahisleri giriniz"<<endl;
   	cin>>bahis;
   	cout<<endl;
   	cout<<"****************************"<<endl;
  	cout<<"Bahis miktari: "<<bahis<<endl;
  	cout<<"****************************"<<endl;

	
   	for(int i=0;i<n;i++){
   		int z1=zar();
   		int z2=zar();
   		cout<<endl;
   		cin.ignore();
   		cout<<"Zar atmak icin ENTER'ye basin'"<<endl;
	    cin.ignore();
	    cout<<endl;
   		cout<<"1. oyuncunun zari: "<<z1<<endl;
   		cout<<"2. oyuncunun zari: "<<z2<<endl;
   		cout<<endl;
   		if(z1>z2){
   			cout<<"Kazanan 1. oyuncu"<<endl;
   			s1++;
		}
		else if(z1<z2){
   			cout<<"Kazanan 2. oyuncu"<<endl;
   			s2++;
		}
   		else cout<<"Berabere!"<<endl;
   		cout<<"Skor: "<<s1<<" "<<s2<<endl;
   		cout<<endl;
	
		if(i!=n-1){
			bahis:
			cout<<"Bahis arttirmak istiyor musunuz? (E/H)'"<<endl;
   			cin>>secim;
   			if (secim=='E'||secim=='e'){
   				cout<<"Bahis arttirma miktarini giriniz"<<endl;
   				cin>>ek;
   				bahis+=ek;
   				cout<<endl;
   				cout<<"****************************"<<endl;
   				cout<<"Yeni bahis miktari: "<<bahis<<endl;
   				cout<<"****************************"<<endl;
			}
			else if (secim=='H'||secim=='h') continue;
			else goto bahis;
		}		
  	}
   	cout<<endl;
   	cout<<"****************************"<<endl;
   	if(s1>s2){
   		cout<<"Birinci oyuncu kazandi!"<<endl;
   		cout<<"Kazanilan miktar: "<<bahis<<endl;
   	} 
   	if(s2>s1){
   		cout<<"Ikinci oyuncu kazandi!"<<endl;
   		cout<<"Kazanilan miktar: "<<bahis<<endl;
   	} 
   	else cout<<"Berabere"<<endl;
   	cout<<"****************************"<<endl;
   	return 0;
}
