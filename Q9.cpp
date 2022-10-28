#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int id;

public:
    void setName(string n)
    {
        name = n;
    }
    void setId(int i)
    {
        id = i;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};

class StudentExam : public Student
{
private:
    int s1, s2, s3, s4, s5, s6;

public:
    void setS1(int s)
    {
        s1 = s;
    }
    void setS2(int s)
    {
        s2 = s;
    }
    void setS3(int s)
    {
        s3 = s;
    }
    void setS4(int s)
    {
        s4 = s;
    }
    void setS5(int s)
    {
        s5 = s;
    }
    void setS6(int s)
    {
        s6 = s;
    }
    int getS1()
    {
        return s1;
    }
    int getS2()
    {
        return s2;
    }
    int getS3()
    {
        return s3;
    }
    int getS4()
    {
        return s4;
    }
    int getS5()
    {
        return s5;
    }
    int getS6()
    {
        return s6;
    }
};

class StudentResult : public StudentExam
{
private:
    float per;

public:
    void setPer(float p)
    {
        per = p;
    }
    float getPer()
    {
        return per;
    }
};

int main()
{
    cout << "Enter the Number of Students You Want : ";
    int size, i = 0;
    float total = 0;
    cin >> size;
    int temp = size;
    StudentResult s[size];
    while (size--)
    {
        cout << "Enter Rollno: ";
        int roll;
        cin >> roll;
        s[i].setId(roll);

        cout << "Enter Name: ";
        string name;
        cin.sync();
        getline(cin, name);
        s[i].setName(name);

        cout << "Enter Marks for Subject 1: ";
        int s1;
        cin >> s1;
        total += s1;
        s[i].setS1(s1);

        cout << "Enter Marks for Subject 2: ";
        int s2;
        cin >> s2;
        total += s2;
        s[i].setS2(s2);

        cout << "Enter Marks for Subject 3: ";
        int s3;
        cin >> s3;
        total += s3;
        s[i].setS3(s3);

        cout << "Enter Marks for Subject 4: ";
        int s4;
        cin >> s4;
        total += s4;
        s[i].setS4(s4);

        cout << "Enter Marks for Subject 5: ";
        int s5;
        cin >> s5;
        total += s5;
        s[i].setS5(s5);

        cout << "Enter Marks for Subject 6: ";
        int s6;
        cin >> s6;
        total += s6;
        s[i].setS6(s6);

        total = total / 6;
        s[i].setPer(total);
        ++i;
    }
    system("cls");
    cout << "___________________________________________" << endl;
    cout << "\n************ Student Marklist ************" << endl;
    cout << "___________________________________________" << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << "Roll No                :" << s[i].getId() << endl;
        cout << "Name                   :" << s[i].getName() << endl
             << endl;
        cout << "Marks of Subject 1     :" << s[i].getS1() << endl;
        cout << "Marks of Subject 2     :" << s[i].getS2() << endl;
        cout << "Marks of Subject 3     :" << s[i].getS3() << endl;
        cout << "Marks of Subject 4     :" << s[i].getS4() << endl;
        cout << "Marks of Subject 5     :" << s[i].getS5() << endl;
        cout << "Marks of Subject 6     :" << s[i].getS6() << endl
             << endl;
        cout << "Total Percentage       :" << s[i].getPer() << endl;
        cout << "___________________________________________" << endl
             << endl;
    }
    return 0;
}
