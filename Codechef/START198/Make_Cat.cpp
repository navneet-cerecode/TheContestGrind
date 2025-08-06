#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    sort(S.begin(), S.end()); //Sort the string, only one combination will be true

    if (S == "act") {         // Check if sorted string is equal to sorted "cat"
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}