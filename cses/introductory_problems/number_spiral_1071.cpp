#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;
    cin >> t;

    for (int32_t i = 0; i < t; i++) {
        int64_t y = 0, x = 0;

        cin >> y >> x;

        if (y == x) {
            cout << y*y - y + 1 << "\n";
        } else if (y > x) {
            if (y % 2 == 0) {
                cout << y*y - x + 1 << "\n";
            } else {
                cout << y*y - 2 * y + x + 1 << "\n";
            }
        } else {
            if (x % 2 == 0) {
                cout << x*x - 2 * x + y + 1 << "\n";
            } else {
                cout << x*x - y + 1 << "\n";
            }
        }
    }

    return 0;
}
