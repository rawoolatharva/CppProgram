#include <iostream>
#include <cstring>
using namespace std;
class Product
{
    private:
    int prodID, prodQuant;
    char prodName[30];
    double price;

    public:
    void setID(int prodID)
    {
        this->prodID = prodID;
    }
    void setQuant(int prodQuant)
    {
        this->prodQuant = prodQuant;
    }
    void setName(char *prodName)
    {
        strcpy(this->prodName, prodName);
    }
    void setPrice(double price)
    {
        this->price = price * this->prodQuant;
    }
    int getID()
    {
        return prodID;
    }
    int getQuant()
    {
        return prodQuant;
    }
    int getName()
    {
        cout<<"\n\t Product Name: "<<prodName;
        return 0;
    }
    double getTotPrice()
    {
        return price;
    }
};
int main()
{
    Product p1;
    p1.setID(001);
    p1.setQuant(5);
    p1.setName("Screw");
    p1.setPrice(20.25);
    cout<<"\n\t Product ID: "<<p1.getID();
    cout<<"\n\t Product Quantity: "<<p1.getQuant();
    p1.getName();
    cout<<"\n\t Total Price: "<<p1.getTotPrice();
    return 0;
}