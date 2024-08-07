// function overloading with pass by reference
#include <iostream>
#include <cmath>
using namespace std;
// for Double Numbers
double input(double &f, double &s)
{
    cout<<"\n\tPlease Enter your First Double Number => ";
    cin>>f;
    cout<<"\n\tPlease Enter your Second Double Number => ";
    cin>>s;
    return 0;
}
double div(double f, double s, double &q, double &r)
{
    q = f / s;
    r = fmod(f , s);
    return 0;
}
double show(double &q, double &r)
{
    cout<<"\n\tQuotient of your Division will be => "<<q;
    cout<<"\n\tRemainder of your Division will be => "<<r<<"\n"; 
    return 0;
}
// for Floating Numbers
float input(float &f, float &s)
{
    cout<<"\n\tPlease Enter your First Floating Number => ";
    cin>>f;
    cout<<"\n\tPlease Enter your Second Floating Number => ";
    cin>>s;
    return 0;
}
float div(float f, float s, float &q, float &r)
{
    q = f / s;
    r = fmod(f ,s);
    return 0;
}
float show(float &q, float &r)
{
    cout<<"\n\tQuotient of your Division will be => "<<q;
    cout<<"\n\tRemainder of your Division will be => "<<r<<"\n"; 
    return 0;
}
// for Integers
int input(int &f, int &s)
{
    cout<<"\n\tPlease Enter your First Integer Number => ";
    cin>>f;
    cout<<"\n\tPlease Enter your Second Integer Number => ";
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
