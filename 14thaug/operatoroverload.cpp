#include <iostream>
using namespace std; 
class Complex
{
    private:
        int real, img;
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }
        Complex(int real, int img)
        {
            this->real = real;
            this->img = img;
        }
        void showDet()
        {
            cout<<" "<<real<<" + "<<img<<" a ";
        }    
        Complex operator-(Complex c)
        {
            Complex t;
            t.real = real - c.real;
            t.img = img - c.img;
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
    c3 = c1 - c2;
    cout<<"\n\tResult of c1 - c2 is := ";
    c3.showDet();
    cout<<"\n";
    return 0;
}