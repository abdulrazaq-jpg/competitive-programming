# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    
    char a = toupper(s[0]);

    cout << a;

    for(int i = 1; i<n; i++)
    {
        cout << s[i];
    }
    return 0;
}