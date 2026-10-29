#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pr  = pair<ll, ll>;
using vll = vector<ll>;
using vi  = vector<int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define srt(x) std::sort(all(x))
#define INF32 INT32_MAX
#define INF64 INT64_MAX
#define MOD 1000000007

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
    int n;
    cin>>n;

    vi u(n+1);
    u[0]=0;

    for(int i=1;i<=n;i++){
        vi digits;
        auto x=i;
        while(x>0){
            auto digit=x%10;
            x/=10;
            if(digit==0) continue;
            digits.push_back(digit);
        }
        u[i]=INF32;
        for(auto digit: digits)
            if(i-digit>=0)
                u[i]=min(u[i], u[i-digit]+1);
    }
    cout<<u[n]<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--) {
        solve();
    }
    return 0;
}
