#include <bits/stdc++.h>
using namespace std;

vector<int> r1;
vector<int> r2;

void solve(int n, int a, int b) {
    if (a+b<n) {
        solve(n-1, a, b);
        r1.push_back(n);
        r2.push_back(n);
    }

    if (a+b==n) {
        vector<int> u(n);

        iota(u.begin(), u.end(), 1);
        for(auto z: u) r2.push_back(z);

        rotate(u.begin(), u.begin() + b, u.end());
        for(auto z: u) r1.push_back(z);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>>t;

    while(t-->0) {
        int n, a, b;
        cin>>n>>a>>b;

        if ((a==0&&b>0)||(a>0&&b==0)||(a+b==1)||(a+b>n)) cout << "NO\n";
        else {
            cout << "YES\n";
            solve(n, a, b);
            for (auto z: r1) cout << z << " ";
            cout << "\n";
            for (auto z: r2) cout << z << " ";
            cout << "\n";

            r1.clear();
            r2.clear();
        }
    }

    return 0;
}
