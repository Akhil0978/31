#include <iostream>
using namespace std;
class Customer
{
private:
    string name;
    int no;

public:
    void setName(string n)
    {
        name = n;
    }
    void setNo(int n)
    {
        no = n;
    }
    string getName()
    {
        return name;
    }
    int getNo()
    {
        return no;
    }
};

class Depositor : public Customer
{
private:
    int accNo;
    float bal;

public:
    void setAcc(int n)
    {
        accNo = n;
    }
    void setBal(float b)
    {
        bal = b;
    }
    int getAcc()
    {
        return accNo;
    }
    float getBal()
    {
        return bal;
    }
};

class Borrower : public Depositor
{
private:
    int loanNo;
    float amt;

public:
    void setLoan(int l)
    {
        loanNo = l;
    }
    void setAmt(float a)
    {
        amt = a;
    }
    int getLoan()
    {
        return loanNo;
    }
    float getAmt()
    {
        return amt;
    }
};

int main()
{
    cout << "Enter the No of Customer Details You Want : ";
    int size, i = 0;
    cin >> size;
    int temp = size;
    Borrower b[size];
    while (size--)
    {
        cout << "\nEnter Customer Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        b[i].setName(name);

        cout << "Enter Customer Phone No : ";
        int no;
        cin >> no;
        b[i].setNo(no);

        cout << "Enter Customer A/C Numeber : ";
        int acc;
        cin >> acc;
        b[i].setAcc(acc);

        cout << "Enter Balance : ";
        int bal;
        cin >> bal;
        b[i].setBal(bal);

        cout << "Enter Loan No : ";
        int loanNo;
        cin >> loanNo;
        b[i].setLoan(loanNo);

        cout << "Enter Loan Amount : ";
        int loanAmt;
        cin >> loanAmt;
        b[i].setAmt(loanAmt);
        cout << "___________________________________" << endl;
        i++;
    }
    system("cls");
    for (int i = 0; i < temp; i++)
    {
        cout << "Details of Customer " << i + 1 << endl;
        cout << "___________________________________" << endl;
        cout << "Customer Name      :" << b[i].getName() << endl;
        cout << "Customer Phone No  :" << b[i].getNo() << endl;
        cout << "Customer A/C No    :" << b[i].getAcc() << endl;
        cout << "Balance            :" << b[i].getBal() << endl;
        cout << "___________________________________" << endl;
        cout << "Loan No            : " << b[i].getLoan() << endl;
        cout << "Amount             : " << b[i].getAmt() << endl;
        cout << "___________________________________" << endl;
    }
    return 0;
}
