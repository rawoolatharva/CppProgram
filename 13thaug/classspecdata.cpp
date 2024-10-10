//example func for class specific and object specific members
#include <iostream>
using namespace std;
class Rectangle
{
    //class members
    private:
    int length, width;
    public:
    // object specific member
    int area(int length, int width)
    {
        return length * width;
    }
    //class specific member
    static int perimeter(int length, int width)
    {
        return 2*(length + width);
    }
};
int main()
{
    Rectangle r1;
    // accessing object specific data using object
    cout<<"\n\t Area of your Rectangle is => "<<r1.area(2, 4); //object specific function needs object to call
    // accessing class specific data using classname
    cout<<"\n\t Perimeter of your Rectangle is => "<<Rectangle::perimeter(2, 4)<<"\n"; //static function does not need object to call
    return 0;
}