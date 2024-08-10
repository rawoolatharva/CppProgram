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
    char inp;
    cout<<"\n\tPlease Select the operation you want to perform by selecting from the options => ";
    cout<<"\n\tA. Addition\n\tB. Subtraction\n\tC. Multiplication\n\tD. Quotient of Division\n\tE. Remainder of Division \n";
    cin>>inp; 
    switch(inp)
    {
        case 'a':
        case 'A':
            cout<<"\n\tAddition of your numbers is => "<<op1.add()<<"\n";
            break;
        case 'b':
        case 'B':
            cout<<"\n\tSubtraction of your numbers is => "<<op1.subtract()<<"\n";
            break;
        case 'c':
        case 'C':
            cout<<"\n\tMultiplication of your numbers is => "<<op1.multiply()<<"\n";
            break;
        case 'd':
        case 'D':
            cout<<"\n\tQuotient of Division of your numbers is => "<<op1.divide()<<"\n";
            break;
        case 'e':
        case 'E':
            cout<<"\n\tRemainder of Division of your numbers is => "<<op1.modulus()<<"\n";
            break;
        default:
            cout<<"\n\tOption is not Available";    
    } 
    return 0;
}