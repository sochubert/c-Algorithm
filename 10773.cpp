#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>


using namespace std;


int main()
{
    int k, num;
    cin >> k;
    int res = 0;

    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num == 0)
            st.pop();
        else
        {
            st.push(num);
        }
    }

    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res;
    return 0;
}