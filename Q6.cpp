#include <iostream>
using namespace std;
class Demo2;
class Demo1
{
private:
    int a = 10;

public:
    friend void swap(Demo1, Demo2);
};

class Demo2
{
private:
    int b = 20;

public:
    friend void swap(Demo1, Demo2);
};

void swap(Demo1 d1, Demo2 d2)
{
    cout << "Before : "
         << "a = " << d1.a << " , b = " << d2.b << endl;
    int temp = d1.a;
    d1.a = d2.b;
    d2.b = temp;
    cout << "After : "
         << "a = " << d1.a << " , b = " << d2.b << endl;
}

int main()
{
    Demo1 obj1;
    Demo2 obj2;
    swap(obj1, obj2);
    return 0;
}
