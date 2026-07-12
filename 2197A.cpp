// Friendly Numbers

#include <iostream>

using namespace std;

// Helper function to calculate the sum of digits of a number
long long get_digit_sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    long long x;
    cin >> x;

    // Rule: y - d(y) is always a multiple of 9.
    // If x is not a multiple of 9, no friendly numbers can exist.
    if (x % 9 != 0) {
        cout << 0 << "\n";
        return;
    }

    int friendly_count = 0;

    // The maximum digit sum for a number up to 10^9 is around 90 (e.g., 999,999,999 is 81)
    // We search the small window from x up to x + 90
    for (long long y = x; y <= x + 90; y++) {
        if (y - get_digit_sum(y) == x) {
            friendly_count++;
        }
    }

    cout << friendly_count << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// SAW THE COMPLETE SOLUTION