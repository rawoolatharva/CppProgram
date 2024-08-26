//reading the whole file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream i1;
    char ch;
    i1.open("test.cpp"); //opens our file in read mode
    while((ch = i1.get()) != -1)
        cout<<ch;
    i1.close();
    return 0;
}