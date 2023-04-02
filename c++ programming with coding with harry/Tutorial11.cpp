#include <iostream>

using namespace std;

int main()
{
    // this program is to "break" the for loop
    // for (int i = 0; i < 40; i++)
    // {
    //     cout << i << endl;
    //     if (i == 5)
    //     {
    //         break;
    //     }
    // }

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;  
    }

    return 0;
}
