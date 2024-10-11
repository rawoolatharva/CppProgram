#include <iostream>
using namespace std; 
class Complex
{
    private:
        int real, img;
    public:
        Complex()//default or zero arg constructor
        {
            real = 0;
            img = 0;
        }
        Complex(int real, int img) //parameterized constructor
        {
            this->real = real;
            this->img = img;
        }
        void showDet()
        {
            cout<<" "<<real<<" - "<<img<<" a ";
        }    
        Complex operator-(Complex c)
        {
            // here in this operator overload func we will have a temp object of the class
            Complex t;
            //and here we will store the difference of real part of c1 with real part of c2 into the real part of t
            t.real = real - c.real;
            //then we will store the difference of img part of c1 with img part of c2 into the img part of t
            t.img = img - c.img;
            // and then we will return this temp object to the place where the operator overloading is happening for class objects
            return t;
        }
};
int main()
{
    Complex c1(5, 3), c2(8, 2), c3;
    cout<<"\n\tFirst Complex Number is := ";
    c1.showDet();
    cout<<"\n\tSecond Complex Number is := ";
    c2.showDet();
    c3 = c1 - c2; //this is going to be read as c3 = c1.operator-(c2); and thus goes to our operator overloading func
    cout<<"\n\tResult of c1 - c2 is := ";
    c3.showDet();
    cout<<"\n";
    return 0;
}