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

    for (auto x: u) {
        for (auto y: x) {
            cout << y;
        }
        cout << "\n";
    }
    
    return 0;
}
