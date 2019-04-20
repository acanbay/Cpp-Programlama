#include<iostream>
#include <math.h>
using namespace std;

class sekil{
public:
    double uzunluk1,uzunluk2,uzunluk3;
    sekil(){}
    sekil(double x){
        uzunluk1 =x;
    }
    sekil(double x,double y){
        uzunluk1 =x;
        uzunluk2 =y;
    }
    sekil(double x, double y, double z){
        uzunluk1 =x;
        uzunluk2 =y;
        uzunluk3 =z;
    }
    void alan(){
    }
};
class dikdortgen:public sekil{
public:
    dikdortgen(double x, double y):sekil(x,y){} //  SuperConstructor
    double alan(){
        return uzunluk1*uzunluk2;
    }
};
class ucgen:public sekil{
public:
    ucgen(double x, double y, double z):sekil(x,y,z){} //  SuperConstructor
    double alan(){
        double u=(uzunluk1+uzunluk2+uzunluk3)/2;
        return sqrt(u*(u-uzunluk1)*(u-uzunluk2)*(u-uzunluk3));
    }
};
class cember:public sekil{
public:
    cember(double x):sekil(x){} //  SuperConstructor
    double alan(){
        return M_PI*pow(uzunluk1,2);
    }
};
int main(){
    dikdortgen d(10,20);
    ucgen u(3,4,5);
    cember c(7);
    
    cout<<"Dikdortgenin alani: "<<d.alan()<<endl;
    cout<<"Ucgenin alani: "<<u.alan()<<endl;
    cout<<"Cemberin alani: "<<c.alan()<<endl;
    
    return 0;
}
