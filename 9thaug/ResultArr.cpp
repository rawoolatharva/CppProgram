#include <iostream>
#include <cstring> //for strcpy
using namespace std;
class Result
{
    private:
    int rollNo;
    char studentName[20];
    float percent;

    public:
    void studentData();
    void showDetails();
};
#include "studFunc.h"
int main()
{
    Result *reportList;
    int no;
    cout<<"\n\tHow many students report list u wanna make?";
    cin>>no;
    reportList= new Result[no];
    for(int i=0; i < no; i++)
    {
        reportList[i].studentData();
    }
    cout<<"\n\tThese are the details of the students report card : ";
    for(int j=0; j<no; j++)
     reportList[j].showDetails();
    return 0;
}