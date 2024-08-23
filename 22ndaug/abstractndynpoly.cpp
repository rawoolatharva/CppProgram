#include <iostream>
using namespace std;

class Shape //this becomes an abstract class
{
    public:
        virtual void save()= 0 //pure virtual method
};
class Circle : public Shape
{
    public:
        void save()
        {
            cout<<"\n\tCircle is Saved";
        }
};
class Rectangle : public Shape
{
    public:
        void save()
        {
            cout<<"\n\tRectangle is Saved";
        }
};
class Pentagon : public Shape
{
    public:
        void save()
        {
            cout<<"\n\tPentagon is Saved";
        }
};

int main()
{
    Shape *arr[4]; //arr[0], arr[1], arr[2], arr[3]
    arr[0] = new Circle();
    arr[1] = new Rectangle();
    arr[2] = new Pentagon();
    arr[3] = new Shape();
    for(int i =0; i < 4; i++)
        {
            arr[i]->save();
        }
    return 0;
}   