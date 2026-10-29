#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t n = 0;    
    cin >> n;

    if (n == 1) cout << "1\n";
    else if (n < 4) {
        cout << "NO SOLUTION\n";
    } else {
        deque<int32_t> u = {2, 4, 1, 3};

        for (int32_t i = 0; i < n - 4; i ++) {
            if (i % 2 == 0) u.push_front(5 + i);
            else u.push_back(5 + i);
        }

        for (auto z: u) {
            cout << z << " ";
        }

        cout << "\n";
    }

    return 0;
}
