#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "you can't come to my party" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "you are not born yet" << endl;
    // }

    // else if (age == 18)
    // {
    //     cout << "you are a kid but you can come to my part" << endl;
    // }
    // else
    // {
    //     cout << "you can come to my party" << endl;
    // }

    switch (age)
    {
    case 18:
        cout << "you are 18 years old" << endl;
        break;
    case 23:
        cout << "you are 23 years old" << endl;
        break;
    case 34:
        cout << "you are 34 years old" << endl;
        break;

    default:
        cout << "you are not enter the correct age" << endl;
        break;
    }

    return 0;
}
