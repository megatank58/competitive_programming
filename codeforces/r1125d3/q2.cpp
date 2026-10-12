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
        for (int j = 0; j < n; j++) {
            char a = ' ';
            cin >> a;
            u[j] = a - '0';
        }

        vector<int32_t> docs;
        vector<int32_t> unprinted;

        for (int j = 1; j <= n; j++) {
            int32_t z = u[j-1];

            switch (z) {
                case 1:
                    docs.push_back(j);
                    break;
                case 2:
                    if (!docs.empty()) {
                        unprinted.push_back(j);
                        docs.pop_back(); 
                    }
                    break;
                case 3:
                    break;
            }
        }

        for (auto z: docs) {
            unprinted.push_back(z);
        }

        sort(unprinted.begin(), unprinted.end());

        cout << unprinted.size() << "\n";
        for (auto z: unprinted) {
            cout << z << " ";
        }
        cout << "\n";
    }

    return 0;
}
