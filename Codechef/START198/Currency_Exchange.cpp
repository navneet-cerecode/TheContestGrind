#include <iostream>
using namespace std;

bool isPossible(int A1, int B1, int A2, int B2) {
    int G = A1 - A2;
    int S = B1 - B2;

    int diff = S - G;

    if (diff % 6 != 0) return false;

    int k = diff / 6;

    // z = G + k must be >= 0
    if (G + k < 0) return false;

    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A1, B1, A2, B2;
        cin >> A1 >> B1 >> A2 >> B2;

        cout << (isPossible(A1, B1, A2, B2) ? "Yes" : "No") << endl;
    }
    return 0;
}
