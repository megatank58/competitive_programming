#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pr  = pair<ll, ll>;
using vll = vector<ll>;
using vi  = vector<int>;

#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define srt(x)  std::sort(all(x))

constexpr int INF32 = 1e9;
constexpr ll  INF64 = 1e18;
constexpr int MOD   = 1e9 + 7;

template <typename T>
void vin(vector<T>& v) {
    for (auto& x : v) cin >> x;
}

template <typename T>
void vout(const vector<T>& v) {
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << (i + 1 == (int)v.size() ? "" : " ");
    }
    cout << '\n';
}

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
