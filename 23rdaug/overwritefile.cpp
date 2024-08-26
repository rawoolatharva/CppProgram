//how to overwrite the entire file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream o1;
    o1.open("abc.txt"); //file will open in overwrite mode
    o1.put('W');
    cout<<"\n\tFile is SAVED";
    o1.close();
    return 0;
}