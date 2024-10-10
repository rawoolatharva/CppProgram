#include <iostream>
using namespace std;
class SrcToDestPrnt
{
    private:
    int src, dest;

    public:
    void getSrcToDest()
    {
        cout<<"\n\tPlease Enter your Source Number => ";
        cin>>src;
        cout<<"\n\tPlease Enter your Destination Number => ";
        cin>>dest;
    }
    int prnt()
    {
        int temp, i = 2;
        temp = src;

        // when dest is greater than src
         while(src <= dest)
        {
            while(i < src)
            {
              if(src % i == 0)
                {
                  break;
                }
                i++;
            }
            if(i==src)
            {
                cout<<"  "<<src<<"  ";
            }
            i=2;  
            src++;
        }
        src = temp;

        //when src is greater than dest
         while(src >= dest)
        {
            while(i < src)
            {
              if(src % i == 0)
                {
                  break;
                }
                i++;
            }
            if(i==src)
            {
                cout<<"  "<<src<<"  ";
            }
          i=2;  
          src--;
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