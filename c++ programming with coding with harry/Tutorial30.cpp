#include <iostream>

using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex a(4, 6);
    a.printNumber();

    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}
