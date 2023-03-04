#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello world";
    string ans = "";
    int r, len = a.size() - 1;
    for (int i = len; i >= 0; i--)
    {
        if (a[i] == ' ')
        {
            r = len - i;
            len = i - 1;
            ans.append(a.substr(i + 1, r));
            ans.append(" ");
        }
    }
    ans.append(a.substr(0, len + 1));
    cout << ans << endl;
    return 0;
}