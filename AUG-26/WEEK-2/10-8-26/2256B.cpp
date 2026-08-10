#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int valid_count = 0;

    // Try all 4 initial combinations for (s[0], s[1])
    for (int start0 = 0; start0 <= 1; start0++) {
        for (int start1 = 0; start1 <= 1; start1++) {
            
            bool possible = true;

            for (int i = 0; i < n; i++) {
                int expected_val;
                if (i % 2 == 0) {
                    // Odd 1-based positions (0, 2, 4...) alternate starting from start0
                    expected_val = ((i / 2) % 2 == 0) ? start0 : 1 - start0;
                } else {
                    // Even 1-based positions (1, 3, 5...) alternate starting from start1
                    expected_val = ((i / 2) % 2 == 0) ? start1 : 1 - start1;
                }

                char expected_char = expected_val + '0';

                if (s[i] != '?' && s[i] != expected_char) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                valid_count++;
            }
        }
    }

    cout << valid_count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}