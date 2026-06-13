#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int freq[26] = 0;

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cnt ++;
        }
    }

    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!";

    else
        cout << "IGNORE HIM!";

    return 0;
}