#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t > 0) {
        int n = 0;
        cin >> n;

        vector<int> u(n);
        for (int i = 0; i < n; i++) cin >> u[i];

        int x = 0;

        for (int i = n - 1; i >= 0; i--) {
            auto r = u[i];

            if (r > x) {
                x += 2 * (r - x);
            } else {
                x -= 2 * (x - r);
            }
        }

        cout << x/2 << "\n";

        t--;
    }

    return 0;
}
