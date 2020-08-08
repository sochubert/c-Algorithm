#include <iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;

    if (90<=i && i<=100)
        cout << "A";
    else if (80<=i && i<=89)
        cout << "B";
    else if (70<=i && i<=79)
        cout << "C";
    else if (60<=i && i<=69)
        cout << "D";
    else 
        cout << "F";

    return 0;
}