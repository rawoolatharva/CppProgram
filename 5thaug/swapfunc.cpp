// swap func with pass by refernce
#include <iostream>
using namespace std;
void swap(int &f, int &s)
{
    f = f+s;
    s= f-s;
    f= f-s;
}
int main()
{
    int fno, sno;
    cout<<"\n\tPlease enter your first number => ";
    cin>>fno;
    cout<<"\n\tPlease enter your second number => ";
    cin>>sno;
    cout<<"\n\tNumbers before swapping => ";
    cout<<"\n\tfirst number is => "<<fno;
    cout<<"\n\tsecond number is => "<<sno;
    swap(fno,sno);
    cout<<"\n\tNumbers after swapping => ";
    cout<<"\n\tfirst number is => "<<fno;
    cout<<"\n\tsecond number is => "<<sno;
    return 0;
}