#include <iostream>
using namespace std;

class elecAppl //is an abstract class
{
    public:
        virtual void swithON() = 0; //pure virtual method
        virtual void switchOff() = 0; //pure virtual method
};
class tubeLight : public elecAppl
{
    public:
        virtual void swithON()
        {
            cout<<"\n\t The TubeLight is switched ON";
        }
        virtual void switchOff()
        {
            cout<<"\n\t The TubeLight is switched OFF";
        }
};
class ceilingFan : public elecAppl
{
    public:
        virtual void swithON()
        {
            cout<<"\n\t The Ceiling Fan is switched ON";
        }
        virtual void switchOff()
        {
            cout<<"\n\t The Ceiling Fan is switched OFF";
        }
};
class microwave : public elecAppl
{
    public:
        virtual void swithON()
        {
            cout<<"\n\t The Microwave is switched ON";
        }
        virtual void switchOff()
        {
            cout<<"\n\t The Microwave is switched OFF";
        }
};
int main()
{
    elecAppl *arr[3]; 
    arr[0] = new tubeLight();
    arr[1] = new ceilingFan();
    arr[2] = new microwave();
    for(int i =0; i < 3; i++)
        {
            arr[i]->swithON();
            arr[i]->switchOff();
            cout<<"\n";
        }
    return 0;
} 