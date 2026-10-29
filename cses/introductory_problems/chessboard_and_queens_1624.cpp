#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    vector<vector<bool>> u(8, vector<bool>(8));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char c;
            cin>>c;
            u[i][j] = c == '*';
        }
    }

    vector<int> n(8);
    iota(n.begin(), n.end(), 0);

    int sum = 0;
    do {
        vector<int> d1(15);
        vector<int> d2(15);

        bool valid = true;

        for (int i = 0; i < 8; i++) {
            if (u[n[i]][i]) {
                valid = false;
                break;
            }
        }

        for (int i = 0; i < 8; i++) {
            if (d1[n[i] + i]) {
                valid = false;
                break;
            }

            d1[n[i] + i] = true;
        }

        for (int i = 0; i < 8; i++) {
            if (d2[n[i] - i + 7]) {
                valid = false;
                break;
            }

            d2[n[i] - i + 7] = true;
        }

        if (valid) sum++;
        
    } while (next_permutation(n.begin(), n.end()));

    cout << sum << "\n";

    return 0;
}
