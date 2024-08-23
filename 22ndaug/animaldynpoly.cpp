#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void legs()
        {
            cout<<"\n\t We are talking about 4 legged animals";
        }
        virtual void sound()
        {
            cout<<"\n\t The sound the animal makes";
        }
        virtual void kind()
        {
            cout<<"\n\t Is it a wild or domesticated animal";
        }
};
class Horse : public Animal
{
    public:
        void legs()
        {
            cout<<"\n\t Horse is a four legged animal";
        }
        void sound()
        {
            cout<<"\n\t A Horse neighs";
        }
        void kind()
        {
            cout<<"\n\t Horse is a Domesticated Animal";
        }
};
class Dog : public Animal
{
    public:
        void legs()
        {
            cout<<"\n\t Dog is a four legged animal";
        }
        void sound()
        {
            cout<<"\n\t A Dog Barks";
        }
        void kind()
        {
            cout<<"\n\t Dog is a Domesticated Animal";
        }
};
class Cat : public Animal
{
    public:
        void legs()
        {
            cout<<"\n\t Cat is a four legged animal";
        }
        void sound()
        {
            cout<<"\n\t A Cat Meows";
        }
        void kind()
        {
            cout<<"\n\t Cat is a Domesticated Animal";
        }
};
int main()
{
    Animal *arr[4]; 
    arr[0] = new Horse();
    arr[1] = new Dog();
    arr[2] = new Cat();
    arr[3] = new Animal();
    for(int i =0; i < 4; i++)
        {
            arr[i]->legs();
            arr[i]->sound();
            arr[i]->kind();
            cout<<"\n";

        }
    return 0;
} 