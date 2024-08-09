#include <iostream>
#include <cstring> //for strcpy
using namespace std;
class Book
{
    int aisleNo;
    char bookName[20], author[20];

    public:
    Book()
    {
        aisleNo = 0;
        strcpy(bookName, "Empty");
        strcpy(author, "Empty");
    }
    Book(int aisleNo, const char *bookName)
    {
        this-> aisleNo = aisleNo;
        strcpy(this->bookName, bookName);  
    }
    Book(int aisleNo, const char *bookName, const char *author)
    {
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