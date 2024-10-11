#include <iostream>
using namespace std;
class Complex
{
    private:
        // our private member variables
        int real, img;
    public:
        Complex() //zero arg const
        {
            // initializing both var as 0 for new obj
            real= 0;
            img = 0;
        }
        //this is a 2 argument constructor with second param default(so it can also be used as a single argument const)
        Complex(int real, int img=0) 
        {
            this->real = real;
            this->img = img;
        } 
        void show()
        {
            cout<<" "<<real<<" + "<<img<<" a ";
        } 
        //here is a overload + op, which has a object getting created in its param and also getting assigned another object at the same time causing it to call the copy constructor to assign the values of passing members int our newly created obj using the passers constructor.
        Complex operator+(Complex c) 
        {
            Complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }  
        friend Complex operator+(int, Complex);
};
int main()
{
    Complex c1(5,3), c2(8,7), c3;
    cout<<"\n\tFirst complex number is => ";
    c1.show();
    cout<<"\n\tSecond complex number is => ";
    c2.show();
    // now we will add two objects and store in third
    c3 = c1 + c2; //this will be read as c1.operator+(c2)....it will look for an overload + operator func which adds two objects and return a class object into our already created c3 class object c3 thus calling overload "=" operator
    cout<<"\n\tAddition of c1 and c2 will be => ";
    c3.show();
    c3 = c2 + 7; //this will be read as c3 = c2.operator+(9)....which will go and look for a single argument constructor but eventually find a 2 param const with one deafult param and set the 7 as a real var value....and then will call the operator + overload to add these two objs.
    cout<<"\n\tAddition of c2 and 7 will be => ";
    c3.show();
    c3 = 7 + c1; //this will be initially read as 7.operator+(c1)....but 7 is not a class object...so the expr further expands to c3 = operator+(7, c1)....now since we have already overloaded the + operator for the class....our option is to call a friend to overload the + operator
    cout<<"\n\tResult of 7 + c1 is := ";
    c3.show();
    return 0;
}
Complex operator+(int r, Complex c)
{
    Complex t;
    t.real = r + c.real;
    t.img = 0 + c.img;
    return t;
}
