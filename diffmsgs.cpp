#include <iostream>
int main()
{
    char fname[10];
    std::cout<<"\n\tPlease enter your first name => ";
    std::cin>>fname;
    char lname[10];
    std::cout<<"\n\tPlease enter your last name => ";
    std::cin>>lname;
    std::cout<<"\n\tWelcome! "<<fname<<" "<<lname;
    return 0;
}