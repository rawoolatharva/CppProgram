// overloading postfix increment operator i.e i++
/* By correctly overloading the postfix increment operator, you can ensure that the program works as intended. The distinction between prefix and postfix operators is crucial in C++, and using the appropriate signatures for operator overloading is essential for the code to compile and run correctly. */
#include <iostream>
using namespace std;
class Number
{
    private:
        int num;
    public:
        Number() //Default or Zero Argument Constructor
        {
            num = 45;
        }
        void show()
        {
            cout<<" "<<num;
        }
        Number operator++(int) //The function Number operator++(int) is defined to overload the postfix increment operator. The int parameter is used to differentiate it from the prefix increment operator.
        {
            Number temp = *this; //Inside the operator function, a temporary object temp is created to hold the current state of the object before the increment. This allows you to return the original value before it was incremented.
            num++; // Increment the current object's num
            return temp; // Return the state before incrementing
        }    
};
int main()
{
    Number n1;
    cout<<"\n\tValue of n1 is => ";
    n1.show();
    n1++; // Calls the overloaded postfix increment operator
    cout<<"\n\t After Increment Value of n1 is => ";
    n1.show();
    cout<<"\n";
    return 0;
}