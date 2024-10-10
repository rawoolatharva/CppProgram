// swap func with pass by refernce
#include <iostream>
using namespace std;

// for int
void getData(int &f, int &s)
{
    cout<<"\n\tPlease enter your first number => ";
    cin>>f;
    cout<<"\n\tPlease enter your second number => ";
    cin>>s;
}
void showData(int &f, int &s)
{
    cout<<"\n\tNumbers after swapping => ";
    cout<<"\n\tfirst number is => "<<f;
    cout<<"\n\tsecond number is => "<<s;
}
void swap(int &f, int &s)
{
    f = f+s;
    s= f-s;
    f= f-s;
}
// for float
void getData(float &f, float &s)
{
    cout<<"\n\tPlease enter your first number => ";
    cin>>f;
    cout<<"\n\tPlease enter your second number => ";
    cin>>s;
}
void showData(float &f, float &s)
{
    cout<<"\n\tNumbers after swapping => ";
    cout<<"\n\tfirst number is => "<<f;
    cout<<"\n\tsecond number is => "<<s;
}
void swap(float &f, float &s)
{
    f = f+s;
    s= f-s;
    f= f-s;
}
// for double
void getData(double &f, double &s)
{
    cout<<"\n\tPlease enter your first number => ";
    cin>>f;
    cout<<"\n\tPlease enter your second number => ";
    cin>>s;
}
void showData(double &f, double &s)
{
    cout<<"\n\tNumbers after swapping => ";
    cout<<"\n\tfirst number is => "<<f;
    cout<<"\n\tsecond number is => "<<s<<"\n";
}
void swap(double &f, double &s)
{
    f = f+s;
    s= f-s;
    f= f-s;
}
int main()
{
    // for integers
    
    int fno, sno;
    cout<<"\n\tFor Integers => ";
    getData(fno, sno);
    swap(fno,sno);
    showData(fno, sno);
    // for floating
    float fn, sn;
    cout<<"\n\tFor Floating numbers => ";
    getData(fn, sn);
    swap(fn,sn);
    showData(fn, sn);
    // for double
    cout<<"\n\tFor Double numbers => ";
    double d1, d2;
    getData(d1, d2);
    swap(d1,d2);
    showData(d1, d2);

    return 0;
}