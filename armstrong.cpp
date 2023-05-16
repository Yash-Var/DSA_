#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, sum = 0, c = 0;
    cin >> num;
    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        c = c + 1;
        temp = temp / 10;
    }
    cout << c << endl;
    int temp2 = num;
    cout << temp2 << endl;
    while (temp2 > 0)
    {
        int rem = temp2 % 10;
        sum = sum + pow(rem, c);
        temp2 = temp2 / 10;
    }
    if (sum == num)
    {
        cout << "Armstrong it is";
    }
    else
    {
        cout << "not an armstrong.";
    }
    return 0;
}