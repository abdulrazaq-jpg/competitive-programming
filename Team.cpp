#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int countSolved = 0;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
            countSolved++;
    }

    cout << countSolved << '\n';
    return 0;
}


