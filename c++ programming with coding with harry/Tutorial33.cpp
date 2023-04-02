#include <iostream>

using namespace std;

class Bankdipsite
{
private:
    int principal;
    int year;
    float interestRate;
    float returnvalue;

public:
    Bankdipsite() {}
    Bankdipsite(int p, int y, float r);
    Bankdipsite(int p, int y, int r);
    void show();
};

Bankdipsite::Bankdipsite(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
Bankdipsite::Bankdipsite(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
void Bankdipsite::show()
{
    cout << endl
         << "principal amount was " << principal
         << ". Return value after " << year
         << " year is " << returnvalue << endl;
}

int main()
{
    Bankdipsite bd1, bd2;

    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdipsite(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R " << endl;
    cin >> p >> y >> R;
    bd2 = Bankdipsite(p, y, R);
    bd2.show();

    return 0;
}
