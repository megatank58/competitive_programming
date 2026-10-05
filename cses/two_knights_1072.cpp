#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t n = 0;
    cin >> n;

    cout << 0 << "\n";

    if (n > 1) {
        cout << 6 << "\n";
    }

    if (n > 2) {
        for (int64_t i = 3; i <= n; i++) {
            cout << (i*i)*(i*i-1)/2 - 4*(i-2) - 4*(i-2)*(i-2) << "\n";
        }
    }

    return 0;
}
