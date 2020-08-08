#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1, n2;
    int dp[33][33] = {0};
    int i, j;
  

    for(int k = 0; k < n; k++)
    {
        cin >> n1 >> n2;
        for(i = 1; i <= n2; i++)
        {
            dp[1][i] = i;
        }
        for (i = 2; i <= n1; i++)
        {
            for (j = 2; j <= n2; j++)
            {
                dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
            }
        }
    cout << dp[n1][n2] << '\n';

    }

}