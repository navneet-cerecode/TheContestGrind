#include <iostream>
#include <vector>
using namespace std;

/*
 * Problem: Fence Colouring (START199D)
 * Logic:
 *   - Strategy 1 (no "paint all"):
 *       cost1 = N - count(1's)
 *   - Strategy 2 (use one "paint all" with most frequent colour):
 *       cost2 = 1 + (N - max_freq)
 *   - Answer = min(cost1, cost2)
 */

void solve() {
    int n;
    cin >> n;
    vector<int> freq(n + 1, 0);

    int cost1 = 0;
    int max_freq = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x != 1) cost1++;
        freq[x]++;
    }

    max_freq = *max_element(freq.begin() + 1, freq.end());
    int cost2 = 1 + (n - max_freq);

    cout << min(cost1, cost2) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
