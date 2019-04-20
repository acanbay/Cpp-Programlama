#include<iostream>
#include "dikdortgen.h"

void dikdortgen::SetBoy(double boy){this->boy=boy;};
void dikdortgen::SetEn(double en){this->en=en;};
double dikdortgen::GetBoy(){return boy;};
double dikdortgen::GetEn(){return en;};
double dikdortgen::Alan(){return boy*en;};
