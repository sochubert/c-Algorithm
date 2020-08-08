#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int k;

    cin >> n >> x;

    while (n>0)
    {
        cin >> k;
        if(k<x)
            cout << k << " ";
        n --;
    }
    return 0;
}