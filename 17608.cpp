#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int k=0;
    int high = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr[i] = k;
    }

    int cnt = 1;

    for (int j = n - 2; j >=0; j --)
    {
        if (arr[j] > arr[n-1])
        {
            if (high == 0)
            {
                cnt++;
                high = arr[j];
            }

            if (high < arr[j])
            {
                cnt ++;
                high = arr[j];
            }
        }
        else
        {
            continue;
        }
    }
    cout << cnt;
}