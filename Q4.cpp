#include <iostream>
using namespace std;
class Persons
{
private:
    string name, add;
    long long int num;

public:
    string getName()
    {
        return name;
    }
    string getAdd()
    {
        return add;
    }
    int getNo()
    {
        return num;
    }

    void setName(string n)
    {
        name = n;
    }
    void setAdd(string a)
    {
        add = a;
    }
    void setNo(long long int n)
    {
        num = n;
    }
};

class Employees : public Persons
{
private:
    string ename;
    int eno;

public:
    int getEmpNo()
    {
        return eno;
    }
    void setEmpNo(int e)
    {
        eno = e;
    }
};

class Manager : public Employees
{
private:
    string designation, departmentName;
    float salary;

public:
    void setDesignation(string d)
    {
        designation = d;
    }
    void setSalary(float s)
    {
        salary = s;
    }
    void setDepartment(string d)
    {
        departmentName = d;
    }

    string getDesignation()
    {
        return designation;
    }
    float getSalary()
    {
        return salary;
    }
    string getDepartment()
    {
        return departmentName;
    }
};

int main()
{
    int size, i = 0;
    cout << "How Many Managers You Want to Enter: ";
    cin >> size;
    Manager records[size];
    system("cls");
    while (size--)
    {
        cout << "\nEnter details of manager " << i + 1 << endl;
        cout << "_________________________" << endl;
        cout << "\nEnter Employee no : ";
        int empno;
        cin >> empno;
        records[i].setEmpNo(empno);

        cout << "Enter Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        cin.sync();
        records[i].setName(name);

        cout << "Enter Address : ";
        string add;
        cin.sync();
        getline(cin, add);
        cin.sync();
        records[i].setAdd(add);

        cout << "Enter Phone No. : ";
        long long int num;
        cin.sync();
        cin >> num;
        records[i].setNo(num);

        cout << "Enter Designation : ";
        string desig;
        cin.sync();
        getline(cin, desig);
        cin.sync();
        records[i].setDesignation(desig);

        cout << "Enter Department Name : ";
        string dep;
        cin.sync();
        getline(cin, dep);
        cin.sync();
        records[i].setDepartment(dep);

        cout << "Enter Basic Salary : ";
        float s;
        cin >> s;
        records[i].setSalary(s);
        ++i;
    }
    float max = records[0].getSalary();
    string name = records[0].getName();
    for (int i = 0; i < size; i++)
    {
        if (records[i].getSalary() > max)
        {
            max = records[i].getSalary();
            name = records[i].getName();
        }
    }
    cout << "\nManager with Highest Salary is : " << max << endl;
    cout << "And, Manager name is : " << name << endl;
    return 0;
}
