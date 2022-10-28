#include <iostream>
using namespace std;
class Worker
{
private:
    int code;
    string name;
    float salary;

public:
    void setCode(int c)
    {
        code = c;
    }
    void setName(string n)
    {
        name = n;
    }
    void setSalary(float f)
    {
        salary = f;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};

class Officer
{
private:
    float DA, HRA;

public:
    void setDA(float d)
    {
        DA = d;
    }
    void setHRA(float h)
    {
        HRA = h;
    }
    float getDA()
    {
        return DA;
    }
    float getHRA()
    {
        return HRA;
    }
};

class Managers : public Worker, public Officer
{
private:
    float TA;

public:
    void setTA(float t)
    {
        TA = t;
    }
    float getTA()
    {
        return TA;
    }
};

int main()
{
    cout << "Enter Manager Count: ";
    int size, i = 0;
    cin >> size;
    int temp = size;
    Managers m[size];
    cout << "Enter Worker Information for " << size << endl;
    while (size--)
    {
        cout << "Enter Code : ";
        int code;
        cin >> code;
        m[i].setCode(code);

        cout << "Enter Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        m[i].setName(name);

        cout << "Enter Salary : ";
        float salary;
        cin >> salary;
        m[i].setSalary(salary);

        cout << "Enter DA : ";
        float da, ta;
        cin >> da;
        m[i].setDA(da);

        cout << "Enetr HRA : ";
        float hra;
        cin >> hra;
        m[i].setHRA(hra);

        ta = salary / 10;
        m[i].setTA(ta);
        i++;
    }
    cout << "_______________________________________" << endl;
    cout << "\nManager Information" << endl;
    cout << "_______________________________________" << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << "Code           :" << m[i].getCode() << endl;
        cout << "Name           :" << m[i].getName() << endl;
        cout << "Salary         :" << m[i].getSalary() << endl;
        cout << "DA             :" << m[i].getDA() << endl;
        cout << "HRA            :" << m[i].getHRA() << endl;
        cout << "TA             :" << m[i].getTA() << endl;
        cout << "Gross Salary   :" << m[i].getSalary() + m[i].getTA() + m[i].getDA() + m[i].getHRA() << endl;
    }
    return 0;
}
