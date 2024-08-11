#include <iostream>
using namespace std;
class CandidateDB
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
    cout<<"How many candidates are in this batch => ";
    cin>>no;
    CandidateDB *list;
    list = new CandidateDB[no];
    cout<<"\n\tPlease Enter the names of all the students in this batch one by one => ";
    for (int i = 0; i < no; i++)
    {
        list[i].setNames();
    }
    cout<<"\n\tThe names of the students who are in this batch are => ";
    for (int i = 0; i < no; i++)
    {
        list[i].showNames();
    }
    return 0;
}