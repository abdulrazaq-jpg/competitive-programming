#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int diff = b - a;

        if (diff >= 2)
            cnt++;
    }

    cout << cnt;

    return 0;
}