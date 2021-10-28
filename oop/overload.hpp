class Complex{
private:
    int real, img;
public:
    Complex(int real, int img);
    void print();
    Complex operator+(Complex c);
};