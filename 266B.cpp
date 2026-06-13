#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t;
    cin >> t;

    string s;
    cin >> s;

    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j++;
            }
        }
    }

    cout << s;

    return 0;
}