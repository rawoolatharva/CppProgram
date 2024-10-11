// multiplication of expressions having unlike terms, showcasing multiplication operator overload
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
            cout<<" "<<termA<<"a"<<" * "<<termB<<"b";
        }  
        // here we will have our overloaded "=" operator constructor  
        Expr operator*(Expr e)
        {
            Expr temp;
            temp.termA = termA * e.termA;
            temp.termB = termB * e.termB;
            return temp;
        }
};
int main()
{
    Expr e1(9, 4), e2(3, -2), e3;
    cout<<"\n\tFirst Expression is := ";
    e1.showDet();
    cout<<"\n\tSecond Expression is := ";
    e2.showDet();
    e3 = e1 * e2; 
    cout<<"\n\tResult of e1 * e2 is := ";
    e3.showDet();
    cout<<"\n";
    return 0;
}