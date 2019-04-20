/*
F=(C*1.8)+32

1. Kullaniciden santigrat deger alinir
2. Alinan deger fahrenheit'e cevirilerek ekrana bastirilir
*/
#include<iostream>
using namespace std;
int main(){
  double ctemp;
  //1
  cout<<"sicaklik(C) girin:"<<endl;
  cin>>ctemp;
  //2
  cout<<"sicaklik(F): "<< (ctemp*1.8)+32<<endl;
  return 0; 
}
