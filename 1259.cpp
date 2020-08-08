#include <iostream>
using namespace std;

bool isPalindrome(char *s) {
    int length = strlen(s);
    
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
            return false;
    }
    return true;
}


int main()
{
    char i[100] = {0};
    cin >> i;
    while(strcmp(i, "0"))
    {
        if (isPalindrome(i))
        {
            cout << "yes" << endl;
        }
        else 
        {
            cout << "no" << endl;
        }
        cin >> i;
    }
    return 0;
}