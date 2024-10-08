// Inheritance
#include <iostream>
using namespace std;
class Number
{
    protected:
        int num;
    public:
        Number() //default or zero argument constructor
        {
            num = 45;
        }   
        Number(int num) //parameterized constructor
        {
            this->num = num;
        } 
        void show()
        {
            cout<<" "<<num;
        }
        Number& operator++()
        {
            ++num;
            return *this;
        }
};
class myNumber : public Number
{
    public: 
        myNumber() //default or zero argument constructor
        {

        }
        myNumber(int n) : Number(n)
        {
            /* Here we are passing "n" towards parameterized constructor of parent class, if we are not passing it then by default zero argument constructor of the parent class will get a call*/ 
        }
        myNumber& operator--()
        {
            --num;
            return *this;
        }
};
int main()
{
    myNumber n1;
    cout<<"\n\t Value of n1 is := ";
    n1.show();
    ++n1; // n1.operator++();
    cout<<"\n\t After increment value of n1 is => ";
    n1.show();
    --n1; // n1.operator--();
    cout<<"\n\t After decrement value of n1 is => ";
    n1.show();
    cout<<"\n";

    myNumber n2(99);
    cout<<"\n\t Value of n2 is := ";
    n2.show();
    ++n2; // n2.operator++();
    cout<<"\n\t After increment value of n2 is => ";
    n2.show();
    --n2; // n2.operator--();
    cout<<"\n\t After decrement value of n2 is => ";
    n2.show();
    cout<<"\n";
    return 0;
}