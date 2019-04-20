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
