#include<iostream>
using namespace std;

class insan{
	public:
		void setdy(int yil){
			dy=yil;
		}
		int getdy(){
			return dy;
		}
		int yas();
	private:
		int dy;
};

int insan::yas(){
	return 2019-getdy();
}

int main(){
	insan ali;
	ali.setdy(1991);
	cout<<"Ali'nin yasi "<<ali.yas()<<" dir."<<endl;
	return 0;
}
