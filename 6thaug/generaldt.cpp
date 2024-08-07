// function overloading with pass by reference
#include <iostream>
#include <cmath>
using namespace std;
// for Generic Data Type
template<class General>
General input(General &f, General &s)
{
    cout<<"\n\tPlease Enter your First Number => ";
    cin>>f;
    cout<<"\n\tPlease Enter your Second Number => ";
    cin>>s;
    return 0;
}
template<class General>
General div(General f, General s, General &q, General &r)
{
    q = f / s;
    r = fmod(f , s);
    return 0;
}
template<class General>
General show(General &q, General &r)
{
    cout<<"\n\tQuotient of your Division will be => "<<q;
    cout<<"\n\tRemainder of your Division will be => "<<r<<"\n"; 
    return 0;
}
int main()
{
    //For integers
    int fno, sno;
    input(fno, sno);
    int iquo, irem;
    div( fno, sno, iquo, irem);
    show( iquo, irem);

    // For Floating Numbers
    float fl1, fl2;
    input(fl1, fl2);
    float fquo, frem;
    div( fl1, fl2, fquo, frem);
    show( fquo, frem);

    // For Double Numbers
    double d1, d2;
    input(d1, d2);
    double dquo, drem;
    div( d1, d2, dquo, drem);
    show( dquo, drem);

    return 0;
}
