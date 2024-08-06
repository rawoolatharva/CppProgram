// find the net price of tshirt at different discounts
#include <iostream>
int main()
{
    int op;
    std::cout<<"\n\tPlease enter the original price of your T-shirt => ";
    std::cin>>op;
    int dis;
    if(op>=1000)
        dis = 25;
    else if(op>=800)
        dis = 20;
    else if(op>=500)
        dis = 15;
    else
        std::cout<<"\n\tWe do not have a discount for you. Thank You";
    std::cout<<"\n\tYour original price is "<<op;
    std::cout<<"\n\tYour discount will be "<<dis<<" percent";
    int disAM = op * dis/100;
    std::cout<<"\n\tYour discounted amount will be "<<disAM;
    std::cout<<"\n\tYour Net Price after discount will be "<<op - disAM;
    return 0;
}