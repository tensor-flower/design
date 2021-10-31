#include<iostream>
#include "overload.hpp"
#include "inherit.hpp"
#include "generic.cpp" // implementation and declaration must be in the same file
using namespace std;
class A{
    int data = 0;
    int* p;
public:
    // A(){}
    A(int d, int p){
        data = d;
        this->p = new int(p);
    }
    // deep copy constructor
    A(A& c){
        data = c.data; 
        // p = c.p;
        this->p = new int(*(c.p));
    }
    void printData(){
        cout<<data<<" "<<*p<<endl;
    }
    void setData(int d){
        data = d;
    }
    void setP(int i){
        *p = i;
    }
};
//g++ -std=c++11 -I ./ *.cpp
int main(){
    // A a(1, 2);
    // a.printData();
    // A b(a);
    // b.printData();
    // b.setP(3);
    // a.printData();
 
    // Complex c(1,2);
    // Complex d(3,4);
    // c.print();
    // auto e = c+d;
    // e.print();

    // Base b;
    // Child c(1);

    // Runner r;
    // auto p = new P();
    // auto c = new C();
    // r.run(p);
    // r.run(c);

    Stack<int> s(2);
    s.a();
    return 0;
}