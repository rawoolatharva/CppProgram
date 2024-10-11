#include <iostream>
using namespace std;

class Xyz
{
    public:
    // this virtual keyword for parent class func makes sure that the compiler waits for object creation 
        virtual void show(int a)
        {
            a++;
            cout<<"\n\tValue is := "<<a;
        }
};
class Abc : public Xyz
{
    public:
        void show(int b) //overridden method
        {
            b--;
            cout<<"\n\tValue is := "<<b;
        }
};
int main()
{
    Xyz *c = new Abc();
    c->show(9);
    return 0;
}