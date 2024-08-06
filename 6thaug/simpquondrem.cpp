// function pass by reference
#include <iostream>
using namespace std;
int input(int &f, int &s)
{
    cout<<"\n\tPlease Enter your First Number => ";
    cin>>f;
    cout<<"\n\tPlease Enter your Second Number => ";
    cin>>s;
    return 0;
}
int div(int f, int s, int &q, int &r)
{
    q = f / s;
    r = f % s;
    return 0;
}
int show(int &q, int &r)
{
    cout<<"\n\tQuotient of your Division will be => "<<q;
    cout<<"\n\tRemainder of your Division will be => "<<r<<"\n";
    return 0;
}
int main()
{
    int fno, sno;
    input(fno, sno);
    int quo, rem;
    div(fno, sno, quo, rem);
    show(quo, rem);
    return 0;
}