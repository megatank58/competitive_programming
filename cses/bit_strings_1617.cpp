#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    cin >> n;

    long long int prod = 1;

    while (n > 0) {
        if (n >= 62) {
            prod *= (1LL << 62) % 1000000007;
            prod %= 1000000007;
            n -= 62;
        } else {
            prod *= (1LL << n) % 1000000007;
            prod %= 1000000007;
            n = 0;
        }
    }

    cout << prod % 1000000007 << "\n";

    return 0;
}
