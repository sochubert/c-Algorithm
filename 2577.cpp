#include <iostream>
using namespace std;

int main()
{
    int a, b ,c, res,cnt = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    
    res = a*b*c;
    string str = to_string(res);

    for (int i = 0; i < 10; i++)
    {
        for(int j=0; j < str.length(); j++)
        {
            string str1 = to_string(i);

            if(str[j] == str1[0])
            {
                cnt ++;
            }
        }
        cout << cnt << "\n";
        cnt = 0;
    }
    return 0;
}