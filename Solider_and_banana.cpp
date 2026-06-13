#include <iostream>
using namespace std;

int main()
{
    int k, n, w;

    cin >> k >> n >> w;

    int total = (w * (w + 1) * k) / 2;

    if (total > n)
    {
        int borrow = total - n;

        cout << borrow;
    }

    else
    {
        cout << 0 ;
    }
    return 0;
}