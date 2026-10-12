#include <bits/stdc++.h>
using namespace std;

int32_t a = 0, b = 0;

int32_t solve(int32_t x, int32_t y, int32_t c) {
    if ((x == a && y == b) || (x - 1 == a && y == b)) {
        return c;
    }

    if (x > a) {
        return INT32_MAX;
    }

    if (y < b) {
        return solve(x + 1, y + 1, c + 1);
    } else {
        return solve(x + 1, y - 1, c + 1);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;
    cin >> t;

    for (int32_t i = 0; i < t; i++) {
        int32_t x = 0, y = 0;
        cin >> a >> b;

        auto r = solve(x, y, 0);

        if (r == INT32_MAX)
            r = -1;

        cout << r << "\n";
    }

    return 0;
}
