#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        long long x1 = 0;
        long long x2 = 0;
        long long x3 = 0;

        x1 = n * a;

        if (n % 3 == 0)
            x2 = ((n / 3)) * b;
        else
            x2 = ((n / 3) + 1) * b;

        long long p = (n % 3) * a;
        long long q = ((n - (n % 3)) / 3);

        x3 = p + q;

        if ((n - (n % 3)) % 3 == 0)
            x3 = p + (q * b);
        else
            x3 = p + ((q + 1) * b);

        long long ans1 = min(x1, x2);
        long long ans2 = min(x2, x3);
        long long ans = min(ans1, ans2);

        cout << ans << "\n";
    }

    return 0;
}