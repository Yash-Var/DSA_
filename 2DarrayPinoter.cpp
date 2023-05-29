#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the Number of row and column : " << endl;
    cin >> n >> m;

    int **p = new int *[n];
    for (int i = 0; i < n; i++)
        p[i] = new int[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> p[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
    return 0;
}