#include <iostream>
using namespace std;
class ArithematicOp
{
    private:
    int fno, sno;
    
    public:
    void getNumbers()
    {
        cout<<"\n\tPlease Enter your First Integer Number => ";
        cin>>fno;
        cout<<"\n\tPlease Enter your Second Integer Number => ";
        cin>>sno;
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
    ArithematicOp op1;
    op1.getNumbers();
    cout<<"Addition of your numbers is => "<<op1.add()<<"\n";
    cout<<"Subtraction of your numbers is => "<<op1.subtract()<<"\n";
    cout<<"Multiplication of your numbers is => "<<op1.multiply()<<"\n";
    cout<<"Quotient of Division of your numbers is => "<<op1.divide()<<"\n";
    cout<<"Remainder of Division of your numbers is => "<<op1.modulus()<<"\n";
    return 0;
}