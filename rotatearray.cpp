#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 7, 11, 4};
    int temp = arr[4];
    for (int i = 4; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}