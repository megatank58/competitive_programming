#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int n = 0, sum = 0;
    cin >> n;

    while (n > 0) {
        sum += n/5;
        n /= 5;
    }

    cout << sum << "\n";

    return 0;
}
