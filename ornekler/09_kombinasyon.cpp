/*
n'nin r'li kombinasyonu için formul:
C(n,r)=n!(r!(n-r)!)
sayilar sifirdan buyuk ve ayni zamanda n>r olmalidir.
*/
#include<iostream>
using namespace std;
// faktoriyel fonksiyonu
double faktoriyel(int x){
	if (x == 0 || x == 1) return 1;
	return x*faktoriyel(x-1);
}
// kombinasyon fonksiyonu
double kombinasyon(int n, int r){
	return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
}
int main(){
	int n,r;
	cout<<"Kombinasyonunu alacaginiz sayiyi giriniz (n)"<<endl;
	cin>>n;
	cout<<"Kacli kombinasyonunu almak istiyorsunuz? (r)"<<endl;
	cin>>r;
	if(n>r && r>0 && r==(int)r && n==(int)n){ // degerlerin pozitif tamsayi olma ve n>r sarti
		cout<<n<<"'in "<<r<<"'li kombinasyonu = "<<kombinasyon(n,r)<<endl;
	}
	else{
		cout<<"Bu kombinasyon alinamaz!\a"<<endl;

	}
	
}
