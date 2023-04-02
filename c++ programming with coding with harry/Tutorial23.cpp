#include <iostream>

using namespace std;

class shop
{
private:
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void display(void);
};

void shop::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.display();
    return 0;
}
