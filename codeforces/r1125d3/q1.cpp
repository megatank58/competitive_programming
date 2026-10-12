#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;
    cin >> t;

    for (int32_t i = 0; i < t; i++) {
        int32_t x = 0, y = 0, r = 0;

        cin >> x >> y >> r;

        cout << x + r << " " << y << "\n";
    }

    return 0;
}
