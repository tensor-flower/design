#include<iostream>
using namespace std;
class Base{
public:
    Base();
    Base(int a);
};

class Child : public Base{
public:
    Child();
    Child (int a);
};