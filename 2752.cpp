#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    int arr[3];

    for(int i = 0; i <= 2; i ++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+3);

    for(int i = 0; i <= 2; i ++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}