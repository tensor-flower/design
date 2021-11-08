// Factory is a component responsible solely for the wholesale (not piecewise) creation of objects.

#include <iostream>
using namespace std;

class Point{
private:
    int a;
    // force factory creation by making constructor private
    Point (int a){
        this->a = a;
    }
    friend class PointFactory;
    friend ostream& operator<<(ostream& os, Point& p) {
        return os << "I'm a friend of the class, msg=" << p.a << endl;
    }
};

struct PointFactory{
    Point NewPoint(int a){
        return {a};
    }
    Point NewPoint2(int a){
        return {a*2};
    }
};

int main(){
    PointFactory pf;
    auto p1 = pf.NewPoint(1);
    auto p2 = pf.NewPoint2(1);
    cout<<p1;
    cout<<p2;
    return 0;
}