#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {2, 4, 6, 4, 8, 8, 6};
    int temp;
    for (int i = 0; i < 7; i++)
    {
        temp = temp ^ arr[i];
    }
    cout << temp << endl;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 6; j >= 0; j--)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}