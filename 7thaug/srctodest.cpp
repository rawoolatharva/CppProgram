#include <iostream>
using namespace std;
class SrcToDestPrnt
{
    private:
    int src, dest;
    public:
    // we will have our constructor with parameters here 
    SrcToDestPrnt(int s, int d)
    {
       this -> src = s;
       this -> dest = d;
    }
    int prnt()
    {
        if(src <  dest)
        {
            while(src <= dest)
            {
                cout<<"  "<<src<<"  ";
                src++;
            }
        }
        else if(src >  dest)
        {
            while(src >= dest)
            {
                cout<<"  "<<src<<"  ";
                src--;
            }
        }
        else
        {
            cout<<"\n\t either both src and dest are same or its not a valid number";
        }
        cout<<"\n";
        return 0;
    }
};
int main()
{
    int strt, end;
    cout<<"\n\tPlease Enter your Start Number => ";
    cin>>strt;
    cout<<"\n\tPlease Enter your End Number => ";
    cin>>end;
    SrcToDestPrnt batch1( strt, end);
    batch1.prnt();
    return 0;
}