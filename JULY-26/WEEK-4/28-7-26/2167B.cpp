// Your Name

#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; 
    cin >> n;

    string s , t;
    cin >> s >> t;

    int f_1[26] = {0};
    int f_2[26] = {0};

    for(int i = 0; i < n; i++)
    {
        f_1[s[i]-'a']++;
    }

    for(int i = 0; i < n; i++)
    {
        f_2[t[i]-'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(f_1[i] != f_2[i])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}