#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int a = 0, b = 1, c;
    if (number == 1)
    {
        cout << a << " ";
        return 0;
    }
    else if (number == 2)
    {

        cout << a << " " << b << " ";
    }
    else if (number >= 2)
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < number; i++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    return 0;
}