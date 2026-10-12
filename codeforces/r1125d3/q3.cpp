#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;
    cin >> t;

    for (int32_t i = 0; i < t; i++) {
        int32_t n = 0;
        cin >> n;

        vector<int32_t> u(n);
        vector<int64_t> v;
        map<int64_t, int32_t> m;

        for (int32_t j = 0; j < n; j++) cin >> u[j];
        for (int32_t j = 0; j < n - 4; j++) {
            int64_t r = u[j] + u[j + 2] - u[j + 4];
            v.push_back(r);
            if (m.contains(r)) {
                m[r] += 1;
            } else {
                m[r] = 1;
            }
        }

        int64_t sum = 0;
        for (int32_t k = 0; k < n - 4; k++) {
            m[v[k]] -= 1;
            sum += m.find(v[k]) -> second - (k < n - 6 ? v[k + 2] == v[k] : 0) - (k < n- 8 ? v[k + 4] == v[k] : 0);
        }

        cout << sum << "\n";
    }

    return 0;
}
