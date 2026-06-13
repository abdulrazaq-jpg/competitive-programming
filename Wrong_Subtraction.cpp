#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = n;

    for (int i = 0; i < k; i++)
    {
        if (ans % 10 != 0)
        {
            ans = ans - 1;
        }

        else
        {
            ans = ans / 10;
        }
    }

    cout << ans;

    return 0;
}