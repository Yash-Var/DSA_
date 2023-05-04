#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int mult = 1;
    while (num != 0)
    {
        int temp = num % 10;
        temp = temp ^ 1;
        sum = sum + temp * mult;
        num /= 10;
        mult *= 10;
    }
    cout << sum << endl;
    return 0;
}