/*
i ve j gibi iki degisken tanimlanir
i degiskeni 1-10 arasinda donguye sokulur,
j de i dongusunun icinde 1-10 arasi donguye sokulur.
Dongu icinde ixj degerleri hesaplanir.
*/
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			printf("%d x %d = %d\t",i,j,i*j);
		}
		printf("\n");
	}
}
