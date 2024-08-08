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
    int strt, end;
    cout<<"\n\tPlease Enter your Start Number => ";
    cin>>strt;
    cout<<"\n\tPlease Enter your End Number => ";
    cin>>end;
    SrcToDestPrnt batch1( strt, end);
    batch1.prnt();
    return 0;
}