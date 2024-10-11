// overloading prefix increment operator i.e. ++i
#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number() // Default or Zero Argument Constructor
    { 
        num = 45; // Initialize num to 45
    }
    
    void show() {
        cout <<" "<< num; // Display the value of num
    }

    // Overloading the prefix increment operator
    Number operator++() // No parameter for prefix
    { 
        ++num; // Increment the value of num
        return *this; // Return the current object by reference
    }
};

int main() {
    Number n1;
    cout << "\n\tValue of n1 is => ";
    n1.show();
    ++n1; // Calls the overloaded prefix increment operator
    cout << "\n\tAfter Increment Value of n1 is => ";
    n1.show();
    cout<<"\n";
    return 0;
}