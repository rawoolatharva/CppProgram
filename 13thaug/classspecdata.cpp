#include <iostream>
using namespace std;
class Rectangle
{
    public:
    static int area(int length, int width)
    {
        return length * width;
    }
    static int perimeter(int length, int width)
    {
        return 2*(length + width);
    }
};
int main()
{
    cout<<"\n\t Area of your Rectangle is => "<<Rectangle::area(2, 4)<<"\n\t Perimeter of your Rectangle is => "<<Rectangle::perimeter(2, 4)<<"\n";
    return 0;
}