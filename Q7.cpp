#include <iostream>
using namespace std;
class EMPLOYEE
{
private:
    int empNo;
    float salary;
    string empName, status;

public:
    int getNo()
    {
        return empNo;
    }
    float getSalary()
    {
        return salary;
    }
    string getName()
    {
        return empName;
    }
    string getStatus()
    {
        return status;
    }
    void setNo(int n)
    {
        empNo = n;
    }
    void setSalary(float n)
    {
        salary = n;
    }
    void setName(string n)
    {
        empName = n;
    }
    void setStatus(string n)
    {
        status = n;
    }
};

int main()
{
    system("cls");
    while (1)
    {
        cout << "\n1. Enter Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        int choice, i = 0, temp, count = 0;
        cin >> choice;
        EMPLOYEE emp[5];
        switch (choice)
        {
        case 1:
            cout << "How Many Records You Want to Enter : ";
            int size, temp;
            cin >> size;
            temp = size;
            while (size--)
            {
                cout << "\nEnter Employee Number : ";
                int no;
                cin >> no;
                emp[i].setNo(no);

                cout << "Enter Employee Name : ";
                string name;
                cin.get();
                getline(cin, name);
                emp[i].setName(name);

                cout << "Enter Employee Salary : ";
                float s;
                cin >> s;
                emp[i].setSalary(s);

                cout << "Enter Employee Status : ";
                string st;
                cin.sync();
                getline(cin, st);
                emp[i].setStatus(st);
                cout << "____________________" << endl;
                ++i;
            }
            break;

        case 2:
            for (int i = 0; i < temp; i++)
            {
                cout << "\n_____________________________________" << endl;
                cout << "Employee Number    : " << emp[i].getNo() << endl;
                cout << "Employee Name      : " << emp[i].getName() << endl;
                cout << "Salary             : " << emp[i].getSalary() << endl;
                cout << "Status             : " << emp[i].getStatus() << endl;
                cout << "_____________________________________" << endl;
            }
            break;

        case 3:
            cout << "Enter Employee Code : ";
            int code;
            cin >> code;
            for (int i = 0; i < temp; i++)
            {
                if (emp[i].getNo() == code)
                {
                    count = 1;
                    cout << "\n_____________________________________" << endl;
                    cout << "Employee Number    : " << emp[i].getNo() << endl;
                    cout << "Employee Name      : " << emp[i].getName() << endl;
                    cout << "Salary             : " << emp[i].getSalary() << endl;
                    cout << "Status             : " << emp[i].getStatus() << endl;
                    cout << "_____________________________________" << endl;
                    break;
                }
            }
            if (count == 0)
                cout << "\nEmployee Not Found !!" << endl;
            break;

        case 4:
            exit(0);
        default:
            cout << "INVALID CHOICE !!" << endl;
            break;
        }
    }
    return 0;
}
