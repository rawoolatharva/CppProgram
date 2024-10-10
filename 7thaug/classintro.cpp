#include <iostream>
#include <string.h>
using namespace std;
class Emp
{
    private:
    int eno;
    char name[10], address[20];

    public:
    // we need a constructor to initialize our class variables
    Emp()
    {
        // there is a "this" pointer that holds address of your current object that is in process of creation and is applied internally
        eno = 0;
        strcpy(this->name, "N/A");
        strcpy(this->address, "N/A");
    }
    int getData()
    {
         // there is a "this" pointer that holds address of your current object that is in process of creation and is applied internally
        cout<<"\n\tEnter eno => ";
        cin>>this->eno;
        cout<<"\n\tEnter name => ";
        cin>>this->name;
        cout<<"\n\tEnter address => ";
        cin>>this->address;
        return 0;
    }
    int showData()
    {
        //there is a "this" keyword that holds address of your current object address that is being called here and is applied internally
        cout<<"\n\t"<<this->eno<<"  "<<this->name<<"  "<<this->address<<"\n";
        return 0;
    }
};
int main()
{
    Emp e1, e2, e3;
    e1.getData();
    e1.showData();
    e2.showData();
    e3.showData();
    return 0;
}