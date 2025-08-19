#include <iostream>
using namespace std;

/*
 * Problem: Cake Making (START199D)
 * Logic:
 *   - Total ways = A * B
 *   - Invalid = min(A, B) (same colour for both layers)
 *   - Answer = A * B - min(A, B)
 */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    int result = A * B - min(A, B);
    cout << result << "\n";

    return 0;
}
