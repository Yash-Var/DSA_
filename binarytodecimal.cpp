#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num;
    // cin >> num;
    // int sum = 0;
    // int mult = 0;
    // while (num != 0)
    // {
    //     int temp = num % 10;
    //     sum = sum + temp * pow(2, mult);
    //     num /= 10;
    //     mult++;
    // }
    // cout << sum << endl;
    int num;
    cin >> num;
    int mult = 1;
    int sum = 0;
    while (num != 0)
    {
        int temp = num % 2;
        sum = sum + temp * mult;
        num = num / 2;
        mult *= 10;
    }
    cout << sum << endl;
    return 0;
}