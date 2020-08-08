#include <iostream>

using namespace std;

int sub(int a, int b)
{
    if (b == 1)
        return 1;
    if (a == 0)
        return b;
    return (sub(a-1, b) + sub(a, b-1));
}

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        cin >> n;
        cout << sub(k, n) << '\n';
    }
}