#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    while (t > 0) {
        int a, b, c = 0;
        cin >> a >> b;

        while (a - b >= 1 && b > 0)  {
            a -= 2;
            b -= 1;
            c++;
        }

        if (c == 0)
            cout << -1 << "\n";
        else
            cout << c << "\n";

        t--;
    }

    return 0;
}
