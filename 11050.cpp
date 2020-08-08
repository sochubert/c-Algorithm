#include <iostream>
using namespace std;

int main()
{
    int n, k, r1 = 1, r2 = 1, r3 = 1, res;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        r1 = r1 * i;
    }
    for (int i = 1; i <= n-k; i++)
    {
        r2 = r2 * i;
    }
    for (int i = 1; i <= k; i++)
    {
        r3 = r3 * i;
    }
    res = r1 / (r2 * r3);

    cout << res << "\n";

    return 0;
}