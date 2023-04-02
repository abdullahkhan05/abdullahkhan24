#include <iostream>

using namespace std;

class c2;
class c1
{
private:
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
private:
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

/*
Trick for swaping
temp = a;
a = b;
b = temp; 
*/

void exchange(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(64);
    exchange(oc1, oc2);

    cout << "The value after changing become : ";
    oc1.display();
    cout << "The value after changing become : ";
    oc2.display();

    return 0;
}
