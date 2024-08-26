//how to write and read the object to and from File
#include <iostream>
#include <fstream>
using namespace std;
class Emp
{
    private:
        int eno;
        char name[10], address[20];
    public:
        void getData()
        {
            cout<<"\n\tEnter emp no => ";
            cin>>eno;
            cout<<"\n\tEnter emp name => ";
            cin>>name;
            cout<<"\n\tEnter emp address => ";
            cin>>address;
        }  
        void showData()
        {
            cout<<"\n\t"<<eno<<" "<<name<<" "<<address;
        }  
};
int main()
{
    int ch;
    Emp e1;
    ofstream o1;
    ifstream i1;
    while(1)
    {
        cout<<"\n\t1.InsertRecord\n\t2.ShowRecords\n\t3.Exit\n\t";
        cin>>ch;
        switch(ch)
        {
            case 1:
                e1.getData();
                o1.open("emp.txt", ios::app);
                o1.write((char*)&e1, sizeof(e1));
                o1.close();
                break;
            case 2:
                i1.open("emp.txt");
                while( i1.read((char*)&e1, sizeof(e1)))
                    e1.showData();
                break;
            case 3:
                exit(0);
            default:
                cout<<"\n\tWrong Input";            
        }
    }
    return 0;
}