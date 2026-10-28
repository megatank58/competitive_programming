#include <bits/stdc++.h>
using namespace std;

string s;
map<string, int> m;

void compress(int pos) {
    char last = s[0];
    string r;

    r.push_back(s[0]);
    for (int i = 1; i < s.size(); i++) {
        char z = s[i];
        if (i == pos) {
            if (z == '0')
                z = '1';
            else
                z = '0';
        }
        if (last == z) {
            continue;
        }
        last = z;
        r.push_back(last);
    }

    m[r]++;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    while (t > 0) {
        cin >> s;

        compress(-1);
        for (int i = 1; i < s.size() - 1; i++) {
            compress(i);
        }
        cout << m.size() << "\n";

        m.clear();
        t--;
    }

    return 0;
}
