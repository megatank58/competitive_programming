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
    int n;
    cin>>n;

    vll u(n+1);
    
    u[0] = 1;
    
    for(int i=1;i<=n;i++){
        ll sum=0;
        for(int j=1;j<=6;j++)
            if(i-j>=0){
                sum+=u[i-j];
                sum%=MOD;
            }
        u[i]=sum;
    }

    cout << u[n] << "\n";
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
