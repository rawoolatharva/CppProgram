#include <iostream>
int sqndcb(int, int *, int *);
int main()
{
    int no;
    std::cout<<"\n\tPlease enter your Number => ";
    std::cin>>no;
    int sq, cb;
    sqndcb(no, &sq, &cb);
    std::cout<<"\n\t"<<sq<<" is the Square for your number.";
    std::cout<<"\n\t"<<cb<<" is the Cube for your number.";
    return 0;
}
int sqndcb(int n, int *sq, int *cb)
{
    *sq = n * n;
    *cb = *sq * n;
    return 0;
}