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