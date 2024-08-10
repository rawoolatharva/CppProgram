#include <iostream>
#include <string.h>
using namespace std;
class Rectangle
{
    private:
    int length;
    int width;
    public:

    void getLenNdWid()
    {
        cout<<"\n\tPlease Enter Length of your Rectangle => ";
        cin>>length;
        cout<<"\n\tPlease Enter Width of your Rectangle => ";
        cin>>width;
    }
    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2*(length + width);
    }
};
int main()
{
    Rectangle r1;
    r1.getLenNdWid();
    cout<<"Area of your Rectangle is => "<<r1.area()<<"\n";
    cout<<"Perimeter of your Rectangle is => "<<r1.perimeter()<<"\n";
    return 0;
}