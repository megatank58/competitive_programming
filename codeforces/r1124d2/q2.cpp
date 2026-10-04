#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int16_t t = 0;

    cin >> t;

    for (int16_t i = 0; i < t; i++) {
        int16_t n = 0;

        cin >> n;

        vector<int64_t> u(n);
        vector<int64_t> v(9);

        for (int16_t j = 0; j < n; j++) cin >> u[j];

        for (auto z: u) {
            int64_t counter = 0;

            while (z % 10 == 0) {
                z = z / 10;
            }

            while (z != 4 && z != 1) {
                int64_t sum = 0;
                while (z != 0) {
                    auto d = z % 10;
                    sum += d*d;
                    z = z/10;
                }
                z = sum;
                counter++;
            }

            if (z == 1) {
                v[8]++;
            } else {
                v[counter % 8]++;
            }
        }

        int64_t sum = 0;

        for (auto z: v) {
            if (z > 1) sum += z * (z - 1) / 2;
        }

        cout << sum << "\n";
    }

    return 0;
}
