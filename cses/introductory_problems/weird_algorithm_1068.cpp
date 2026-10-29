#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int64_t n = 0;

    cin >> n;
    cout << n << " ";

    while (n != 1) {
        if (n % 2 == 0) n = n/2;
        else n = 3 * n + 1;

        cout << n << " ";
    }

    return 0;
}
