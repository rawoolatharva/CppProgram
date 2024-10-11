// Overloading relational operator
#include <iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        friend void operator>>(istream&, Number&);
        int operator>(Number n)
        {
            if(num > n.num)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }    
};
void operator>>(istream &in, Number &n)
{
    in>>n.num;
}
int main()
{
    Number fno, sno;
    cout<<"\n\tEnter First Number => ";
    cin>>fno;
    cout<<"\n\tEnter Second Number => ";
    cin>>sno;
    if(fno > sno) //if (fno.operator>(sno))
        cout<<"\n\tFirst is greater";
    else if(sno > fno) //if(sno.operator > (fno))
        cout<<"\n\tSecond Number is greater";
    else
        cout<<"\n\tBoth are same";  
    return 0;      
}