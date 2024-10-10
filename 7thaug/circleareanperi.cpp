#include <iostream>
#include <string.h>
#define PI 3.142
using namespace std;
class Circle
{
    private:
    float radius, ar, peri;

    public:
    void getRad()
    {
        cout<<"Please provide your radius in floating number => ";
        cin>>radius;
    }
    float area()
    {
        ar = PI * radius * radius;
        return 0;
    }
    float perimeter()
    {
        peri = 2 * PI * radius;
        return 0;
    }
    float showResult()
    {
        cout<<"Area of your Circle is => "<<ar<<"\n";
        cout<<"Perimeter of your Circle is => "<<peri<<"\n";
        return 0;
    }
};
int main()
{
    Circle c1, c2;
    c1.getRad();
    c1.area();
    c1.showResult();
    c2.getRad();
    c2.area();
    c2.perimeter();
    c2.showResult();
    return 0;
}