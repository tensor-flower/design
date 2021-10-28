#include "overload.hpp"
#include <iostream>
using namespace std;
Complex::Complex(int real, int img){
    this->real = real, this->img = img;
}

void Complex::print(){
    cout<<real<<" "<<img<<endl;
}

Complex Complex::operator+(Complex c){
    return Complex(real+c.real, img+c.img);
}