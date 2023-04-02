#include <iostream>

using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};
    int i = 0;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }

    // int i = 0;
    // do
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    return 0;
}
