#include <iostream>
using namespace std;

class Students
{
private:
    int roll_no;
    string religion;

public:
    string f_name;
    int standard;
    int age;
    void setData(int r, string rel); // r stands for roll_no & rel stands for religion.
    void getData()
    {
        cout << "The roll number of student is " << roll_no << endl;
        cout << "The religion of student is " << religion << endl;
        cout << "The Father's name of student is " << f_name << endl;
        cout << "The standard of student is " << standard << endl;
        cout << "The age of student is " << age << endl;
    }
};

void Students ::setData(int r, string rel)
{
    roll_no = r;
    religion = rel;
}

int main()
{
    Students abdullah;
    abdullah.f_name = "Aijaz hussain khan";
    abdullah.standard = 10;
    abdullah.age = 15;
    abdullah.setData(40, "muslim");
    abdullah.getData();
    return 0;
}