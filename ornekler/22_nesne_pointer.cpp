#include<iostream>
using namespace std;

class insan{
	public:
		double boy;
		double kilo;
};

int main(){
	insan ali;
	insan *p;
	p=&ali;
	p->boy=180; // ali.boy=180; demek
	cout<<"Ali'nin boyu "<<p->boy<<" cm'dir"<<endl;
	return 0;
}
