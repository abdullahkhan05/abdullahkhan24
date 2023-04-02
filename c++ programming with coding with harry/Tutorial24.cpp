#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the you id " << endl;
        cin>>id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << "and this is employee number " << count << endl;
    }
};

int Employee :: count;

int main()
{
    Employee Abdullah, Arsalan, Zakir;

    Abdullah.setData();
    Abdullah.getData();

    Arsalan.setData();
    Arsalan.getData();

    Zakir.setData();
    Zakir.getData();

    return 0;
}