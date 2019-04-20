/*
    NOT	 | Harf
   0-50 	F
  50-70  	C
  70-90  	B
  90-100	C
*/
#include<iostream>
using namespace std;

int main(){
	int not_;
	cout << "Notu giriniz..." << endl;
	cin >> not_ ;
	
	if(not_>=90){
		cout << "Harf notu: A" << endl;
	}
	else if(not_>=70){
		cout << "Harf notu: B" << endl;
	}
	else if(not_>=50){
		cout << "Harf notu: C" << endl;
	}
	else{
		cout << "Harf notu: F" << endl;
	}
	return 0;
}
