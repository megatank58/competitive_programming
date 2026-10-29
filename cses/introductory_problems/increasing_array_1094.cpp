#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int64_t n = 0;
    int64_t moves = 0;
    int64_t prev = 0;

    cin >> n;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        int64_t curr = 0;

        cin >> curr;

        if (prev > curr) {
            moves += prev - curr;
            prev = curr + (prev - curr);
        } else prev = curr;
    }

    cout << moves;

    return 0;
}
