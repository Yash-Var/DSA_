#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}