#include <iostream>
int main(){
    char studClass;
    std::cout<<"\n\tPlease enter your class => ";
    std::cin>>studClass;
    int no;
    std::cout<<"\n\tPlease enter your roll no. => ";
    std::cin>>no;
    char name[15];
    std::cout<<"\n\tPlease enter your name => ";
    std::cin>>name;
    float perc;
    std::cout<<"\n\tPlease enter your percentage => ";
    std::cin>>perc;
    std::cout<<"\n\tFollowing are the details you entered: ";
    std::cout<<"\n\tClass : "<<studClass;
    std::cout<<"\n\tRoll No. : "<<no;
    std::cout<<"\n\tName : "<<name;
    std::cout<<"\n\tPercentage: "<<perc;
    return 0;
}