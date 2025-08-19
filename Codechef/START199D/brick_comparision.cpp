#include <iostream>
using namespace std;

/*
 * Problem: Brick Comparisons (START199D)
 * Logic:
 *   - Chef starts with brick 1.
 *   - Always switches to a later brick if it has strictly larger size.
 *   - Final brick = index of the first maximum element.
 */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int bestIdx = 1, bestVal;
        cin >> bestVal; // First brick

        for (int i = 2; i <= N; ++i) {
            int x;
            cin >> x;
            if (x > bestVal) {
                bestVal = x;
                bestIdx = i;
            }
        }
        cout << bestIdx << "\n";
    }
    return 0;
}
