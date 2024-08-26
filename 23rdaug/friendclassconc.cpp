/*Friend Class Concept :- Friend class can access private members */
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int l, b;
    public:
        Rectangle(int l, int b)
        {
            this->l=l;
            this->b=b;
        }
        friend class Circle; //Here we have declared Circle class as a friend class of rectangle    
};
class Circle
{
    private:
        int rad;
    public:
        Circle(int rad)
        {
            this->rad = rad;
        }
        void calArea(Rectangle rt)
        {
            float area = 3.14 * rad * rad;
            cout<<"\n\tArea of Circle is => "<<area;
            area = rt.l * rt.b; //Here we can access private members of Rectangle class because circle is a friend class 
            cout<<"\n\tArea of Rectangle => "<<area;
        }    
};
int main()
{
    Rectangle r1(5, 4);
    Circle c1(7);
    c1.calArea(r1);
    return 0;
}