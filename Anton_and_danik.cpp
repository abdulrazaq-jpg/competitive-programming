#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            cnt1++;

        else if (s[i] == 'D')
            cnt2++;
    }

    if (cnt1 > cnt2)
        cout << "Anton";

    else if (cnt1 < cnt2)
        cout << "Danik";

    else
        cout << "Friendship";
    return 0;
}