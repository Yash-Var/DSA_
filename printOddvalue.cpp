#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {2, 7, 11, 10, 8, 13};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}