#include <iostream>
#include <string.h>
using namespace std;
class Rectangle
{
    private:
    int length;
    int width;
    public:
    // we will have our constructor with parameters here 
    Rectangle(int l, int w)
    {
       length = l;
       width = w;
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
    Rectangle r1(6, 3);
    cout<<"Area of your Rectangle is => "<<r1.area()<<"\n";
    cout<<"Perimeter of your Rectangle is => "<<r1.perimeter()<<"\n";
    return 0;
}