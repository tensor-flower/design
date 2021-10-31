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

class P{
public:
    P();
    virtual void f() = 0; // virtual to achieve polymorphism. Assign 0 to make it pure virtual function, force implementation
    ~P();
};

class C : public P{
public:
    C();
    void f();
    ~C();
};

class Runner{
public:
    void run(P* p);
};