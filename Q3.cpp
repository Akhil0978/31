#include <iostream>
using namespace std;
class Marks
{
private:
    int py, ch, math;

public:
    void setMarks()
    {
        cin >> py >> ch >> math;
    }
    int getMarks()
    {
        return (py + ch + math);
    }
};

class TotalMarks : public Marks
{
public:
    int total(Marks m)
    {
        int total = m.getMarks();
        return total;
    }
};

class Percentage : public TotalMarks
{
public:
    void percentage(int t)
    {
        cout << "Percentage is : " << t / 3 << "%" << endl;
    }
};

int main()
{
    Marks m;
    cout << "Enter the marks for physics, chemistry & mathematics:" << endl;
    m.setMarks();
    TotalMarks t;
    int total = t.total(m);
    Percentage p;
    p.percentage(total);
    return 0;
}
