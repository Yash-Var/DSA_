#include <iostream>
using namespace std;
int main()
{

    // int count = 1;
    for (int i = 4; i >= 0; i--)
    {
        int spaces = 5 - i - 1;

        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // count++;
        cout << endl;
    }
    return 0;
}
