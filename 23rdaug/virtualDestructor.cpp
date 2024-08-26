/*destructor is a special function whose name is same as class name and it starts with tild sign i.e. ~, and it gets called internally when object goes beyond the scope and it is generally used to Deallocate the memory which was allocated by Contsructor*/
// virtual destructor
#include <iostream>
using namespace std;
class Parent
{
    public:
        Parent()
        {
            cout<<"\n\tParent Constructor";
        }
        virtual ~Parent()
        {
            cout<<"\n\tParent Destructor";
        }
};
class Child : public Parent
{
    public:
        Child()
        {
            cout<<"\n\tChild Constructor";
        }
        virtual ~Child()
        {
            cout<<"\n\tChild Destructor";
        }
};
int main()
{
    Parent *p = new Child(); //Allocate memory at run time
    delete p; //De-Allocate memory at run time
    return 0;
}