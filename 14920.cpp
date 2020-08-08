#include <iostream>

using namespace std;

int main()
{
    int n, i=1;
    cin >> n;

    while (n != 1)
    {
        i++;
        if(n % 2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n + 1;
        }
        
    }
    cout << i;
    return 0;
}