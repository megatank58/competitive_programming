#include <bits/stdc++.h>
using namespace std;

auto n = 0;
auto len = 0;
vector<int8_t> v;

int32_t recurse(int32_t i, int32_t b1, int32_t a0) {
    if (i == len) return b1+a0;

    if (v[i] == 1) {
        b1++;
        return min(b1+a0-1, recurse(i+1, b1, a0));
    }
    else {
        a0--;
        return recurse(i+1, b1, a0);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    cin >> n;

    for (int32_t i = 0; i < n; i++) {
        string input;

        cin >> len;
        cin >> input;

        int32_t b0 = 0;
        int32_t b1 = 0;
        int32_t a0 = 0;
        
        int32_t i1 = -1;
        int32_t j = 0;

        for (char c: input) {
            if (c == '1' && i1 < 0) i1 = j;

            if (c == '0' && i1 < 0) b0++;
            if (c == '0' && i1 >= 0) a0++;
            
            v.push_back(c - '0');

            j++;
        }

        if (v[0] == 1) {
            cout << a0 << "\n";
        } else if (i1 == -1) {
            cout << 0 << "\n";
        } else {
            cout << recurse(i1, b1, a0) << "\n";
        }

        v.clear();
    }

    return 0;
}
