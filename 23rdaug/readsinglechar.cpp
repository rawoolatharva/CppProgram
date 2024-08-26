// reading a single character from a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream i1;
    char ch;
    i1.open("test.cpp"); //opens our file in read mode
    ch = i1.get();
    cout<<ch;
    i1.close();
    return 0;
}