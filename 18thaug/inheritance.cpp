// Inheritance
#include <iostream>
using namespace std;
class Number
{
    protected:
        int num;
    public:
        Number()
        {
            num = 45;
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
    return 0;
}