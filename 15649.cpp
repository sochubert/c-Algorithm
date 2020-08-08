#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int n, m;
int arr[8];
vector<int> v(8, 0);
vector<int> visited(8, 0);  


void func(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i ++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return;
}


int main()
{
    

    cin >> n >> m;

    

    
   

   return 0;
    
}