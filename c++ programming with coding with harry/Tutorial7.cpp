#include <iostream>

using namespace std;

int c = 45;

int main()
{
    // *************Build in Data types****************

    // int a, b, c;
    // cout << "The value of a is : \n";
    // cin >> a;

    // cout << "The value of b is : \n";
    // cin >> b;

    // c = a + b;

    // cout << "The sum is : " << c << endl;
    // cout << "The global c is : " << ::c;

    // ************* Float, double and long double Literals****************

    // float d = 34.4f;
    // long double e = 34.4l;
    // cout << "The size of 34.4 is : " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is : " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is : " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is : " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is : " << sizeof(34.4L) << endl;

    // cout << "The value of d is : " << d << endl;
    // cout << "The value of e is : " << e;

    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}
