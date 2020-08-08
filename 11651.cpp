#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;


bool comp (pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}


int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > v(n);

    for (int i=0; i < n; i ++)
    {
        cin >> v[i].first >> v[i].second;
    }

    stable_sort(v.begin(), v.end(), comp);

    for (int j=0; j<n; j++)
    {
        cout << v[j].first  << " " << v[j].second << "\n";
    }

    return 0;
}