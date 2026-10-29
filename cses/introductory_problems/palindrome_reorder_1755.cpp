#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    string s;
    cin >> s;
    map<char, int> m;

    for (auto z: s) {
        m[z]++;
    }

    int c = 0;
    int size = 0;
    for (auto z: m) {
        if (z.second % 2 == 1)
            c++;
        size += z.second;
    }

    vector<char> v(size);

    if (c > 1)
        cout << "NO SOLUTION\n";
    else {
        c = 0;
        for (auto z: m) {
            if (z.second % 2 == 1) {
                v[size/2] = z.first;
                for (int i = 0; i < z.second / 2; i++) {
                    v[c] = z.first;
                    v[size - 1 - c] = z.first;
                    c++;
                }
            }
            else 
                for (int i = 0; i < z.second / 2; i++) {
                    v[c] = z.first;
                    v[size - 1 - c] = z.first;
                    c++;
                }
        }

        for (auto z: v) {
            cout << z;
        }
        cout << "\n";
    }

    return 0;
}
