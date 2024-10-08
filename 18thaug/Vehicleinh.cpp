// inheritance and constructor overload
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    protected:
        string make;
        string model;

    public:
        Vehicle(){};
        Vehicle(string m, string mo)
        {
            this -> make = m;
            this -> model = mo;
        }
        void start()
        {
            cout<<"\n\t"<<make<<" "<<model<<" is starting.";
        }
        void stop()
        {
            cout<<"\n\t"<<make<<" "<<model<<" is stopping.";
        }
};
class Car : public Vehicle
{
    public:
        Car(){}
        Car(string m, string mo) : Vehicle(m, mo){}

        void acc()
        {
            cout<<"\n\t"<<make<<" "<<model<<" is accelerating.";
        }
};
class Bike : public Vehicle
{
    public:
        Bike(){}
        Bike(string m, string mo) : Vehicle(m, mo){}

        void acc()
        {
            cout<<"\n\t"<<make<<" "<<model<<" is accelerating.";
        }
};
int main()
{
    Car c1("Tata", "Nexon");
    Bike b1("Bajaj","Pulsar 200NS");

    c1.start();
    b1.start();
    cout<<"\n";
    c1.acc();
    b1.acc();
    cout<<"\n";
    c1.stop();
    b1.stop();
    cout<<"\n";
    return 0;
}