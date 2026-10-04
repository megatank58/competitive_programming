#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int32_t n = 0, k = 0, r = 0;

        cin >> n >> k;

        vector<int32_t> u;

        for (int32_t j = 0; j < n; j++) {
            cin >> r;
            u.push_back(r);
        }

        int64_t sum = 0;

        while (n >= k) {
            if (u[k-1] > u[n - k]) {
                sum += u[k-1]; 
                u.erase(u.begin() + k - 1);
            } else {
                sum += u[n - k];
                u.erase(u.begin() + n - k);
            }

            n--;
        }

        cout << sum << "\n";
    }

    return 0;
}
