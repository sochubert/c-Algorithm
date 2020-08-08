#include <iostream>
using namespace std;

int main()
{
    int n, r=0;
    for(int i=1; i<=5; i++)
    {
        cin >> n;
        if (n < 40)
            n = 40;
        r = r+n;
    }
    cout << r/5;

    return 0;
}