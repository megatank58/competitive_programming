#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int64_t n = 0;

    cin >> n;

    int64_t sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int64_t m = 0;
        cin >> m;
        sum += m;
    }

    cout << n * (n + 1) / 2 - sum << "\n";

    return 0;
}
