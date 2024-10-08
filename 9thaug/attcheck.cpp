// dynamic alloc for array of objects pgm   
#include <iostream>
#include <cstring> //for strcpy
using namespace std;
class AttendanceCheck
{
    private:
       char candidateName[30];

    public:
        void setNames()
        {
            cin>>candidateName;
        }
        void showNames()
        {
            cout<<"\n\t"<<candidateName;
        }      
};
int main()
{
    int no;
    cout<<"How many candidates are present today? => ";
    cin>>no;
    AttendanceCheck *a1;
    // dynamic memory allocation for this array of objects
    a1 = new AttendanceCheck[no];
    cout<<"\n\tPlease Enter the names of the students who are present one by one => ";
    for (int i = 0; i < no; i++)
    {
        a1[i].setNames();
    }
    cout<<"\n\tThe names of the students who are present one by one => ";
    for (int i = 0; i < no; i++)
    {
        a1[i].showNames();
    }
    return 0;
}