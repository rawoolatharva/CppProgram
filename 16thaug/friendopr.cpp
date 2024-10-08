// multiplication of expressions having unlike terms.
//overload = op const
//single param const and default argument in const
//copy const
//friend operator
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
        Expr(int termA, int termB)
        {
            this->termA = termA;
            this->termB = termB;
        }
        void showDet()
        {
            cout<<" "<<termA<<"a"<<" - "<<termB<<"b";
        }  
        void showDetfr()
        {
            cout<<" "<<termA<<"a"<<" "<<termB<<"b";
        }  
        // here we will have our overloaded "=" operator constructor  
        Expr operator-(Expr e)
        {
            Expr temp;
            temp.termA = termA - e.termA;
            temp.termB = termB - e.termB;
            return temp;
        }

        friend Expr operator-(int termA, Expr e);
};
int main()
{
    Expr e1(9, 4), e2(3, 2), e3, e4;
    cout<<"\n\tFirst Expression is := ";
    e1.showDet();
    cout<<"\n\tSecond Expression is := ";
    e2.showDet();
    e3 = e1 - e2; 
    cout<<"\n\tResult of e1 - e2 is := ";
    e3.showDet();
    e4 = 7 - e2; // e4 = 7.operator - (e2)
    //7 is not an object, hence this expansion gets failed
    // further expansion will be e4 = operator-(7, e4)
    cout<<"\n\tResult of 7 - e2 is := "; // 7a - (3a), 0b - (2b) => 4a - 2b;
    e4.showDetfr();
    cout<<"\n";
    return 0;
}
// we will create a further exanded overloaded "=" op const in global and pass it a friend in the class Expr
Expr operator-(int termA, Expr e)
{
    Expr temp;
    temp.termA = termA - e.termA;
    temp.termB = 0 - e.termB;
    return temp;
}