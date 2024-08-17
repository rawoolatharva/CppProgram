// subtraction of expressions having unlike terms.
//overload = op const
//single param const and default argument in const
//copy const
#include <iostream>
using namespace std; 
class Expr
{
    private:
        int termA, termB;
    public:
        Expr()
        {
            termA = 0;
            termB = 0;
        }
        Expr(int termA, int termB = 0)
        {
            this->termA = termA;
            this->termB = termB;
        }
        void showDet()
        {
            cout<<" "<<termA<<"a"<<" - "<<termB<<"b";
        }  
        // here we will have our overloaded "=" operator constructor  
        Expr operator-(Expr e)
        {
            Expr temp;
            temp.termA = termA - e.termA;
            temp.termB = termB - e.termB;
            return temp;
        }
};
int main()
{
    Expr e1(9, 4), e2(3, 2), e3, e4;
    cout<<"\n\tFirst Expression is := ";
    e1.showDet();
    cout<<"\n\tSecond Expression is := ";
    e2.showDet();
    e3 = e1 - e2;
    cout<<"\n\tResult of e1 - e2 is := "; // 9a -4b - (3a - 2b) => 9a - 3a -4b + 2b => 6a - 2b;
    e3.showDet();
    e4 = e1 - 5; // e4 = e1.operator - (5)
    //this expansion will take us to the overload = oper costructor to be c(9) => and this will find a single param constructor of our object class => it will then find the 2 param constructor where second param set as default.
    cout<<"\n\tResult of e1 - 5 is := "; // 9a - 4b -(5a - 0b) => 9a - 5a - 4b + 0b => 4a - 4b;
    e4.showDet();
    cout<<"\n";
    return 0;
}