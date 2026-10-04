#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int16_t n = 0;

    cin >> n;

    for (int16_t i = 0; i < n; i++) {
        int16_t len = 0;
        int16_t c = 0;
        char ch = ' ';
        int16_t steps = 0;

        cin >> len;
        cin >> ch;

        vector<char> v(len);

        for (int16_t j = 0; j < len; j++) {
            cin >> v[j];
        }

        for (char e: v) {
            if (c >= len/2) break;
            if (e != v[len-c-1]) {
                if (e != ch) steps++;
                if (v[len-c-1] != ch) steps++;
            }

            c++;
        }

        cout << steps << "\n";
    }

    return 0;
}
