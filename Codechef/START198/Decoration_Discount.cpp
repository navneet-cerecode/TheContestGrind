#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        int minCost = INT_MAX;

        // Trying all pairs because N<100
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i == j) continue;

                int cost1 = A[i];
                int cost2 = A[j];

                if (j == i + 1) cost2 /= 2; // Applying the discount
                if (i == j + 1) cost1 /= 2;

                minCost = min(minCost, cost1 + cost2);
            }
        }

        cout << minCost << endl;
    }

    return 0;
}
