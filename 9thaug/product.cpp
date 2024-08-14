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
    void setName(const char *prodName)
    {
        strcpy(this->prodName, prodName);
    }
    void setPrice(double price)
    {
        this->price = price * this->prodQuant;
    }
    void getID()
    {
        cout<<"\n\t Product ID: "<<prodID;
    }
    void getQuant()
    {
        cout<<"\n\t Product Quantity: "<<prodQuant;
    }
    void getName()
    {
        cout<<"\n\t Product Name: "<<prodName;
    }
    void getTotPrice()
    {
        cout<<"\n\t Total Price: "<<price<<"\n";
    }
};
int main()
{
    Product p1, p2, p3;
    p1.setID(001);
    p1.setQuant(7);
    p1.setName("Washers");
    p1.setPrice(5.25);

    p2.setID(002);
    p2.setQuant(10);
    p2.setName("Bolts");
    p2.setPrice(20.50);
    
    p3.setID(003);
    p3.setQuant(10);
    p3.setName("WingNuts");
    p3.setPrice(15.30);

    cout<<"Your Product List : ";
    p1.getID();
    p1.getName();
    p1.getQuant();
    p1.getTotPrice();
    cout<<"\n";
    p2.getID();
    p2.getName();
    p2.getQuant();
    p2.getTotPrice();
    cout<<"\n";
    p3.getID();
    p3.getName();
    p3.getQuant();
    p3.getTotPrice();
    cout<<"\n";
    return 0;
}