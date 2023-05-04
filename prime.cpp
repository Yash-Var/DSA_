#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for (int i = 2; i < number - 1; i++)
    {
        if (number % i == 0)
        {
            cout << "Number is not a prime" << endl;
            return 0;
        }
    }
    cout << "Number is prime" << endl;
}
