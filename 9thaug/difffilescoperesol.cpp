#include <iostream>
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
    Result reportList[3];
    reportList[0].studentData();
    reportList[1].studentData();
    reportList[2].studentData();
    reportList[0].showDetails();
    reportList[1].showDetails();
    reportList[2].showDetails();
    return 0;
}