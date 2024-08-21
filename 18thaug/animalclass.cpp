// inheritance with construtcor overloading
#include <iostream>
#include <string>
using namespace std;
class Animal
{
    protected:
        string name;
        int age;
    public:
        Animal()
        {}
        Animal(string n, int a)
        {
            this-> name = n;
            this-> age = a;
        }    
        void eat()
        {
            cout<<"\n\t"<<name<<" is eating.";
        }
        void sleep()
        {
            cout<<"\n\t"<<name<< " is sleeping.";
        }
        void theirAge()
        {
            cout<<"\n\t"<<name<<" is "<<age<<" years old.";
        }
};
class Dog : public Animal
{
    public:
        Dog()
        {}
        Dog(string n, int a) : Animal(n, a)
        {}
};
class Cat : public Animal
{
    public:
        Cat()
        {}
        Cat(string n, int a) : Animal(n, a)
        {}
};
int main()
{
    Dog dog1("Casper", 9);
    Cat cat1("Sniffer", 7);

    dog1.theirAge();
    dog1.eat();

    cat1.theirAge();
    cat1.sleep();
    cout<<"\n";
    return 0;
}