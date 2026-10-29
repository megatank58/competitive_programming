#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pr  = pair<ll, ll>;
using vll = vector<ll>;
using vi  = vector<int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define srt(x) std::sort(all(x))
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
    int n,x;
    cin>>n>>x;

    vi coins(n);
    vin(coins);

    vll sum(x+1);
    sum[0]=0;

    for(int i=1;i<=x;i++){
        ll best=INT64_MAX;
        for(auto coin: coins)
            if(i-coin>=0&&sum[i-coin]!=INT64_MAX)
                best=min(best, sum[i-coin]+1);
        sum[i]=best;
    }

    if(sum[x]==INT64_MAX) cout<<-1<<"\n";
    else cout<<sum[x]<<"\n";
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
