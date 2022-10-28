#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void getName()
    {
        cout << "Name is : " << name << endl;
    }
    void getAge()
    {
        cout << "Age is : " << age << endl;
    }
};

class Employee : public Person
{
private:
    int empid;
    float salary;

public:
    void setEmpid(int id)
    {
        empid = id;
    }
    void setSalary(float s)
    {
        salary = s;
    }
    void getEmpid()
    {
        cout << "Id is : " << empid << endl;
    }
    void getSalary()
    {
        cout << "Salary is : " << salary << endl;
    }
};

int main()
{
    Person p;
    Employee e;
    p.setAge(20);
    p.setName("Amash");
    e.setAge(22);
    e.setName("Chota Bheem");
    p.getAge();
    p.getName();
    e.getAge();
    e.getName();
    return 0;
}
