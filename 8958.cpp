#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    int k;
    int arr[100];
    for (int i =0; i < n; i++)
    {
        cin >> str;
        int cnt = 0;
        k = 0;
        for (int j = 0; j < str.length(); j++)
        {

            if (str[j] == 'O')
            {
                cnt ++;
                k = k + cnt;
            }

            else 
            {
                cnt = 0;
            }

        }
        arr[i] = k;
    }


    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
    
    return 0;
}