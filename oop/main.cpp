#include<iostream>
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
int main(){
    A a(1, 2);
    a.printData();
    A b(a);
    b.printData();
    b.setP(3);
    a.printData();
    return 0;
}