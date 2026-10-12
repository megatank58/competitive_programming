#include <bits/stdc++.h>
using namespace std;

long long int recurse(vector<int> u, int index) {
    long long sum = 0;
    if (index == u.size() + 1) {
        sort(u.begin(), u.end());

        return u[u.size() - 1];
    }
    for (int i = 0; i < index - 1; i++) {
        sum += u[i];
    }

    auto p = u;
    auto q = u;

    p[index - 1] += sum;
    q[index - 1] -= sum;
    
    return max(recurse(p, index + 1), max(recurse(q, index + 1), recurse(u, index + 1)));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t > 0) {
        int n = 0;
        cin >> n;

        vector<int> u(n);
        for (int i = 0; i < n; i++) cin >> u[i];

        cout << recurse(u, 2) << "\n";

        t--;
    }

    return 0;
}
