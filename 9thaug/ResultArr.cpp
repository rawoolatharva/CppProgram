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
    void studentData()
    {
        cout<<"\n\tEnter Student Roll Number => ";
        cin>>rollNo;
        cout<<"\n\tEnter Student Name => ";
        cin>>studentName;  
        cout<<"\n\tEnter Student scored Percentage => ";
        cin>>percent;  
    }
    void showDetails()
    {
        cout<<"\n\t"<<rollNo<<"  "<<studentName<<"  "<<percent<<"\%\n";
    }
};
int main()
{
    Result reportList[3];
    reportList[0].studentData();
    reportList[1].studentData();
    reportList[2].studentData();
    reportList[0].showDetails();
    reportList[1].showDetails();
    reportList[2].showDetails();
    return 0;
}