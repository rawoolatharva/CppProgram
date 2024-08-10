#include <iostream>
using namespace std;
class SrcToDestPrnt
{
    private:
    int src, dest;
    public:
    // we will have our constructor with parameters here 
    void getSrcToDest()
    {
        cout<<"\n\tPlease Enter your Source Number => ";
        cin>>src;
        cout<<"\n\tPlease Enter your Destination Number => ";
        cin>>dest;
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
    SrcToDestPrnt batch1;
    batch1.getSrcToDest();
    batch1.prnt();
    return 0;
}