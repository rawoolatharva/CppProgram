#include <iostream>
using namespace std;

class Xyz
{
    public:
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
    Xyz *arr[2]; //there are two pointers arr[0] and arr[1]
    arr[0] = new Abc(); //parent pointer can hold objects of child class
    arr[1] = new Xyz(); //parent pointer is holding its own object
    for(int i = 0; i < 2; i++)
        arr[i]->show(9);
    return 0;
}