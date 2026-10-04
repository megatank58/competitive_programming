#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    auto n = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        auto k = 0;

        cin >> k;

        auto a = 0, b = 0, c = 0;

        cin >> a >> b >> c;

        cout << k - min(a, min(b, c)) << "\n";
    }

    return 0;
}
