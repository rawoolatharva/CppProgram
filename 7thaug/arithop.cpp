#include <iostream>
using namespace std;
class ArithematicOp
{
    private:
    int fno, sno;
    public:
    // we will have our constructor with parameters here 
    ArithematicOp(int f, int s)
    {
       this -> fno = f;
       this -> sno =  s;
    }
    int add()
    {
        return fno + sno;
    }
    int subtract()
    {
        return fno - sno;
    }
    int multiply()
    {
        return fno * sno;
    }
    int divide()
    {
        return fno / sno;
    }
    int modulus()
    {
        return fno % sno;
    }
};
int main()
{
    ArithematicOp op1( 9, 4);
    cout<<"Addition of your numbers is => "<<op1.add()<<"\n";
    cout<<"Subtraction of your numbers is => "<<op1.subtract()<<"\n";
    cout<<"Multiplication of your numbers is => "<<op1.multiply()<<"\n";
    cout<<"Quotient of Division of your numbers is => "<<op1.divide()<<"\n";
    cout<<"Remainder of Division of your numbers is => "<<op1.modulus()<<"\n";
    return 0;
}