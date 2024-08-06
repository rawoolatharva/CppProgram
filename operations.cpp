#include <iostream>
int subtract(int , int, int *);
int multiply(int , int, int *);
int divide(int , int, int *);
int modulus(int , int, int *);
int main()
{
    int fno;
    std::cout<<"\n\tPlease enter your first number => ";
    std::cin>>fno;
    int sno;
    std::cout<<"\n\tPlease enter your second number => ";
    std::cin>>sno;
    int sub;
    subtract(fno, sno, &sub);
    int mul;
    multiply(fno, sno, &mul);
    int div;
    divide(fno, sno, &div);
    int mod;
    modulus(fno, sno, &mod);
    std::cout<<"\n\tThe subtraction of your numbers will be "<<sub;
    std::cout<<"\n\tThe multiplication of your numbers will be "<<mul;
    std::cout<<"\n\tThe division of your numbers will give us "<<div;
    std::cout<<"\n\tThe remainder of the division of your numbers will be "<<mod<<"\n";
    return 0;
}
int subtract(int f, int s, int *sub)
{
   *sub = f - s;
   return 0;
}
int multiply(int f, int s, int *mul)
{
   *mul = f * s;
   return 0;
}
int divide(int f, int s, int *div)
{
   *div = f / s;
   return 0;
}
int modulus(int f, int s, int *mod)
{
   *mod = f % s;
   return 0;
}