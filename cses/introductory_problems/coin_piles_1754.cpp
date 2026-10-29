#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t > 0) {
        int a = 0, b = 0;
        cin >> a >> b;

        if (2*a-b >= 0 && (2*a-b) % 3 == 0 && 2*b-a >= 0 && (2*b-a) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";

        t--;
    }

    return 0;
}
