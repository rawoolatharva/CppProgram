#include <iostream>
using namespace std;
class Xyz
{
    public:
      void show(int a)
      {
        a++;
        cout<<"\n\tValue is :- "<<a;
      }
};
class Abc : public Xyz
{

};
int main()
{
    Xyz *c = new Abc();
    c->show(9);
    return 0;
}