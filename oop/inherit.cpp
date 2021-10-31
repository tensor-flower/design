#include "inherit.hpp"
#include<iostream>
using namespace std;
Base::Base (){
    cout<<"base"<<endl;
}
Base::Base(int a){
    cout<<"base "<<a<<endl;
}
Child::Child (){
    cout<<"child"<<endl;
}
Child::Child (int a):Base::Base(a){ // call superclass parameterized constructor, must provide initializer list
    cout<<"child "<<a<<endl;
}

P::P(){
    cout<<"p\n";
}
// void P::f(){
//     cout<<"f\n";
// }
P::~P(){}

C::C(){
    cout<<"c\n";
}
void C::f(){
    cout<<"g\n";
}
C::~C(){}

void Runner::run(P* p){
    p->f();
}