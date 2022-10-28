#include <iostream>
using namespace std;
class Item
{
private:
    string itemName;
    int itemNo;
    float price;

public:
    void setName(string n)
    {
        itemName = n;
    }
    void setNo(int n)
    {
        itemNo = n;
    }
    void setPrice(float p)
    {
        price = p;
    }
    string getName()
    {
        return itemName;
    }
    int getNo()
    {
        return itemNo;
    }
    float getPrice()
    {
        return price;
    }
};

class Discount : public Item
{
private:
    int discountedPrice;

public:
    void setDiscount(int d)
    {
        discountedPrice = d;
    }
    int getDiscount()
    {
        return discountedPrice;
    }
};

int main()
{
    int size, i = 0, temp;
    cout << "How many items you want to enter: ";
    cin >> size;
    temp = size;
    Discount items[size];
    system("cls");
    while (size--)
    {
        cout << "\nEnter Item Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        items[i].setName(name);

        cout << "Enter Item No : ";
        int no;
        cin >> no;
        items[i].setNo(no);

        cout << "Enter Item Price : ";
        float p;
        cin >> p;
        items[i].setPrice(p);

        cout << "Enter Discount Percent : ";
        int d;
        cin >> d;
        cout << "_____________________" << endl;
        d = (items[i].getPrice() * d) / 100;
        d = items[i].getPrice() - d;
        items[i].setDiscount(d);
        ++i;
    }
    int totalPrice = 0, totalDiscount = 0;
    for (int i = 0; i < temp; i++)
    {
        cout << "\nItem-Name : " << items[i].getName() << endl;
        cout << "Item-No : " << items[i].getNo() << endl;
        totalPrice += items[i].getPrice();
        cout << "Item-Price : " << items[i].getPrice() << endl;
        totalDiscount += items[i].getPrice() - items[i].getDiscount();
        cout << "Discounted-Price : " << items[i].getDiscount() << endl;
        cout << "____________________" << endl;
    }
    cout << "\nTotal-Price : " << totalPrice << endl;
    cout << "Total-Discount : " << totalDiscount << endl;
    return 0;
}
