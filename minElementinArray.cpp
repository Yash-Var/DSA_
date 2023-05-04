#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {7, 7, 11, 2, 8, 170, 0, 11};
    int minimun = arr[0];
    for (int i = 0; i < 8; i++)
    {

        // cout << arr[i] << endl;
        if (arr[i] < minimun)
        {
            minimun = arr[i];
        }
    }
    cout << minimun << endl;
    return 0;
}