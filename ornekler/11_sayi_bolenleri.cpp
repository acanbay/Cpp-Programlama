// Girilen sayinin bolenlerini bulan program
#include<iostream>
#include<math.h>
using namespace std;
void bul_bolen(int n);

int main(){
  int i,n;
  cout<<"sayi girin: ";cin>>n;
  bul_bolen(n);
  cout<<endl;
  return 0;
}

void bul_bolen(int n){
	int i; 
	double sq_n=sqrt((double)n);
	for (i=2;i<=sq_n;i++){
		if(n%i == 0){
		cout<<i<<"x";
		bul_bolen(n/i);
		return;
		}
	}
	cout<<n; 
}
