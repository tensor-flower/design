#include "generic.hpp"
#include <iostream>
using namespace std;

template<class T>
void Stack<T>::a(){
    cout<<t<<endl;
}

template<class T>
Stack<T>::Stack(T t){
    this->t = t;
}