#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int x1 = 0;
        int x2 = 0;

        if (n % (x + y) == 0)
            x1 = n / (x + y);
        else
            x1 = ((n / (x + y)) + 1);

        if ((n - (x * z)) % (x + 10 * y) == 0)
            x2 = (n - (x * z)) / (x + 10 * y) + z;
        else
            x2 = ((n - (x * z)) / (x + 10 * y)) + z + 1;

        int ans = min(x1, x2);

        cout << ans << "\n";
    }
    return 0;
}