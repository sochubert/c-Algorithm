#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a<=b)
    {
        if(b<=c)
            cout << b;
        else if (a<=c && c<=b)
            cout << c;
        else
            cout << a;
        
    }
    else if (b<=a)
    {
        if (c<=b)
            cout << b;
        else if (b<=c && c<=a)
            cout << c;
        else
            cout << a;
    }

    return 0;
}