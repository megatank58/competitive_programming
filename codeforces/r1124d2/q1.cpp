#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int16_t t = 0;

    cin >> t;

    for (int16_t i = 0; i < t; i++) {
        int16_t n = 0;
        int16_t k = 0;

        cin >> n;
        cin >> k;

        int64_t r = 2 * (k - 1) + pow(2, n - k + 1);

        cout << r << "\n";
    }

    return 0;
}
