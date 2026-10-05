#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin>>n;

    vector<deque<int>> u = {{0}, {1}};

    for (int i = 1; i < n; i++) {
        auto v = u;
        u.clear();
        for (auto z: v) {
            z.push_front(0);
            u.push_back(z);
            z.erase(z.begin());
        }
        reverse(v.begin(), v.end());
        for (auto z: v) {
            z.push_front(1);
            u.push_back(z);
            z.erase(z.begin());
        }
    }

    auto counter = 1;
    vector<int> v(n);

    cout << (int) pow(2, n) - 1 << "\n";

    for (int i = 0; i < u.size() - 1; i++) {
        auto z = u[i];
        auto [i1, i2] = ranges::mismatch(z, u[i+1]);
        auto x = i1 - z.begin();

        if (x%2 == 0) {
            if (v[x] == 0) {
                cout << 1 << " " << 3 << "\n";
                v[x] = 2;
            } else if (v[x] == 2) {
                cout << 3 << " " << 2 << "\n";
                v[x] = 1;
            } else if (v[x] == 1) {
                cout << 2 << " " << 1 << "\n";
                v[x] = 0;
            }
        } else {
            if (v[x] == 0) {
                cout << 1 << " " << 2 << "\n";
                v[x] = 1;
            } else if (v[x] == 1) {
                cout << 2 << " " << 3 << "\n";
                v[x] = 2;
            } else if (v[x] == 2) {
                cout << 3 << " " << 1 << "\n";
                v[x] = 0;
            }
        }

        counter++;
    }
    
    return 0;
}
