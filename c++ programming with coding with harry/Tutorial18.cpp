// This program is to show the factorial number

// #include <iostream>

// using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int a;
//     cout << "Enter the number which you want the factorial of : ";
//     cin >> a;
//     cout << "The factorial of " << a << " is " << factorial(a) << endl;
//     return 0;
// }

// This program is to show the fibonacci sequence number

#include <iostream>

using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int a;
    cout << "Enter the number which you want to know the fibonacci sequence : ";
    cin >> a;
    cout << "The fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}
