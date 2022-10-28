#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void setData()
    {
        cin >> a >> b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

class B : public A
{
public:
    void display(A a)
    {
        cout << "Sum is : " << a.getA() + a.getB() << endl;
    }
};

int main()
{
    A a;
    cout << "Enter values for a & b:" << endl;
    a.setData();
    B b;
    b.display(a);
    return 0;
}
