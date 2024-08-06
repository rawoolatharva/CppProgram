// function pass by reference
#include <iostream>
using namespace std;
int div(int f, int s, int &q, int &r)
{
    q = f / s;
    r = f % s;
    return 0;
}
int main()
{
    int fno;
    cout<<"\n\tPlease Enter your First Number => ";
    cin>>fno;
    int sno;
    cout<<"\n\tPlease Enter your Second Number => ";
    cin>>sno;
    int quo, rem;
    div(fno, sno, quo, rem);
    cout<<"\n\tQuotient of your Division will be => "<<quo;
    cout<<"\n\tRemainder of your Division will be => "<<rem<<"\n";
    return 0;
}
