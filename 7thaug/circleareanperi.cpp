#include <iostream>
#include <string.h>
#define PI 3.142
using namespace std;
class Circle
{
    private:
    float radius;
    public:
    // we will have our constructor with parameters here 
    Circle(float r)
    {
       radius = r;
    }
    float area()
    {
        return PI * radius * radius;
    }
    float perimeter()
    {
        return 2 * PI * radius;
    }
};
int main()
{
    Circle c1(7.0);
    cout<<"Area of your Circle is => "<<c1.area()<<"\n";
    cout<<"Perimeter of your Circle is => "<<c1.perimeter()<<"\n";
    return 0;
}