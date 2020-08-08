#include <iostream>
using namespace std;

int main()
{
    int realnumber, realspace, result;
    cin >> realnumber;
    cin >> realspace;
    result = realnumber * realspace;

    int n;
    for(int i=0; i<5; i++)
    {
        cin >> n;
        cout << n - result << " ";
    }

    return 0;
}