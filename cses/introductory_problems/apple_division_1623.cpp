#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> u;

long long int solve(int i, long long int x, long long int y) {
    if (n == i) {
        return abs(x-y);
    }
    
    auto x1 = x + u[i];
    auto y1 = y + u[i];

    i++;

    return min(solve(i, x1, y), solve(i, x, y1));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    cin>>n;
    for(int i = 0; i<n; i++) {
        int r;
        cin>>r;
        u.push_back(r);
    }

    cout << solve(0, 0, 0) << "\n";

    return 0;
}
