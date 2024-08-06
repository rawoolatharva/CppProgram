#include <iostream>
using namespace std;
int add(int f, int s, int &sm)
{
    sm = f + s;
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
    int sum;
    add(fno, sno, sum);
    cout<<"\n\tSummation of your Number will be => "<<sum<<"\n";
    return 0;
}
