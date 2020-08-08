#include <iostream>
using namespace std;

int main() 
{
    int arr[5][4];
    int k=0;
    int n;
    int sum[5] = {0};
    int s=0;

    for(int i=0; i<5; i++)
    { 
        for(int j=0; j<4; j++)
            cin >> arr[i][j];
    }

    for(int i=0; i<5; i++)
    { 
        for(int j=0; j<4; j++)
            sum[i] += arr[i][j];
    }


    for(int i=0; i<5; i++)
    {   
        if(s < sum[i])
        {
            s = sum[i];
            n = i;
        }
    }

    cout << n+1 << " " << s;

    return 0;
}