// here we will overload a standard class operator members for our objects of our user defined class
// Overloading Left Insertion i.e. Left Shift Operator i.e << to display object.
// Overloading Right Insertion i.e Right Shift Operator i.e >> to display object.
#include <iostream>
using namespace std;
class Complex
{
    private:
        int real, img;
    public:
        // friend declarations for operator overloading
        friend operator>>(istream &in, Complex &c);
        // Use const for read-only access
        friend operator<<(ostream &out, const Complex &c);    
};
// Definition of >> operator
istream& operator>>(istream &in, Complex &c);
{
    in>>c.real;
    in>>c.img;
}
// Definition of << operator
ostream& operator<<(ostream &out, const Complex &c);
{
    out<<c.real<<" + "<<c.img<<"a";
}
int main()
{
    Complex c1, c2;
    cout<<"\n\tEnter first complex number:= ";
    cin>>c1; //this will be read as cin.operator>>(c1);
    /*"cin" is an object of "istream" class. But inside istream class, there is no such function present which takes paramter of type "Complex". Hence this expansion will fail , so further expansion will be --> operator>>(cin, c1); */
    cout<<"\n\tEnter second complex number:= ";
    cin>>c2; // read as operator>>(cin, c2);
    cout<< "\n\tFirst Complex Number is => ";
    cout<<c1; //this will be read as cout.operator<<(c1);
    /* "cout" is an object of "ostream" class. But inside ostream class, there is no such func which will take parameter of type "Complex". Hence this expansion will fail, so further expansion will be --> operator<<(cout,c1) */
    cout<<c2; //will be read as operator<<(cout,c2);
    return 0;
}