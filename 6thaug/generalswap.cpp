// swap func with pass by refernce
#include <iostream>
using namespace std;
// for Generic datatype
template<class General>
void getData(General &f, General &s)
{
    cout<<"\n\tPlease enter your first number => ";
    cin>>f;
    cout<<"\n\tPlease enter your second number => ";
    cin>>s;
}
template<class General>
void showData(General &f, General &s)
{
    cout<<"\n\tNumbers after swapping => ";
    cout<<"\n\tfirst number is => "<<f;
    cout<<"\n\tsecond number is => "<<s<<"\n";
}
template<class General>
void customSwap(General &f, General &s)
{
    f = f + s;
    s= f - s;
    f= f - s;
}
int main()
{
    // for integers
    int fno, sno;
    cout<<"\n\tFor Integers => ";
    getData(fno, sno);
    customSwap(fno,sno);
    showData(fno, sno);

    // for floating
    float fn, sn;
    cout<<"\n\tFor Floating numbers => ";
    getData(fn, sn);
    customSwap(fn,sn);
    showData(fn, sn);

    // for double
    cout<<"\n\tFor Double numbers => ";
    double d1, d2;
    getData(d1, d2);
    customSwap(d1,d2);
    showData(d1, d2);

    return 0;
}