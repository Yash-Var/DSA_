#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    int mult = 1;
    cin >> num;
    while (num != 0)
    {
        int temp = num % 2;
        sum = sum + temp * mult;
        num = num / 2;
        mult = mult * 10;
    }
    cout << sum << endl;
    return 0;
}