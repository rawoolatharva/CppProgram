// contsructor overloading pgm
#include <iostream>
#include <cstring> //for strcpy
using namespace std;
class Book
{
    int aisleNo;
    char bookName[20], author[20];

    public:
    // zero argument constructor
    Book()
    {
        aisleNo = 0;
        strcpy(bookName, "Empty");
        strcpy(author, "Empty");
    }
    // 2 argument param constructor
    Book(int aisleNo, const char *bookName)
    {
        // here we have implicitly used this pointer to make sure that the argument values are getting stored in our private variables
        this-> aisleNo = aisleNo;
        strcpy(this->bookName, bookName);  
    }
    // 3 argument param constructor
    Book(int aisleNo, const char *bookName, const char *author)
    {
        // here we have implicitly used this pointer to make sure that the argument values are getting stored in our private variables
        this-> aisleNo = aisleNo;
        strcpy(this->bookName, bookName);  
        strcpy(this->author, author);  
    }
    int showDetails()
    {
        cout<<"\n\t"<<aisleNo<<"  "<<bookName<<"  "<<author<<"\n";
        return 0;
    }
};
int main()
{
    Book b1, b2( 3, "Atomic Habbits"), b3( 7, "Ikigai", "Yukari Mitsuhashi");
    b1.showDetails();
    b2.showDetails();
    b3.showDetails();
    return 0;
}