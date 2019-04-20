#include <fstream>
#include <iostream>
using namespace std;

int main(){

	int A,B;
	ifstream dosya1;
	ofstream dosya2;
	dosya1.open("14_data.txt");
	dosya2.open("14_sonuc.txt");

	while (dosya1) {
		dosya1 >> A >> B;
		if (!dosya1.good()) break;
		
		dosya2<<A<<"x"<<B<<"="<<A*B<<endl;
		
	}
	dosya1.close();
	dosya2.close();
	return 0;
}

