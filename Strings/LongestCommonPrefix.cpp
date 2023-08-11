#include <bits/stdc++.h>
using namespace std;
int main()
{
    //EX-1
    vector<string> strs = {"flower", "flow", "flight"};

    //EX-2
    // vector<string> strs = {"dlower", "flow", "flight"};

    //EX-3
    // vector<string> strs = {"a"};

    string s = strs[0];
    int i = 0;
    int j = 0;
    string prefix = "";
    if (strs.size() == 1)
    {
        cout << strs[0];
    }
    while (j < s.length())
    {
        for (int i = 1; i < strs.size(); i++)
        {
            string s2 = strs[i];
            if (s[j] == s2[j])
            {
                if (i == strs.size() - 1)
                {
                    prefix += s2[j];
                }
                continue;
            }
            else
            {
                j = s.length();
            }
        }
        j++;
    }
    cout << prefix;
    return 0;
}