#include <iostream>
#include <cstring> //for strcpy
using namespace std;
class AttendanceCheck
{
    private:
       char candidateName[30];

    public:
        void getNames()
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
    a1 = new AttendanceCheck[no];
    cout<<"\n\tPlease Enter the names of the students who are present one by one => ";
    for (int i = 0; i < no; i++)
    {
        a1[i].getNames();
    }
    cout<<"\n\tThe names of the students who are present one by one => ";
    for (int i = 0; i < no; i++)
    {
        a1[i].showNames();
    }
    return 0;
}