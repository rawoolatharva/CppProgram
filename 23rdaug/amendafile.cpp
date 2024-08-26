//how to amend a few more things in our file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream o1;
    o1.open("abc.txt", ios::app); //file will open in append mode
    o1<<"This is C++ Batch";
    cout<<"\n\tFile is SAVED";
    o1.close();
    return 0;
}