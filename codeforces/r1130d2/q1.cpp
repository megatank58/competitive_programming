#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;

        vector<int> u(n);
        for(int i=0;i<n;i++) cin>>u[i];

        vector<int> v;
        for(int i=0;i<=n-k;i++) v.push_back(u[i]);
        sort(v.begin(), v.end());

        int mex=-1;
        for(int i=0;i<=n-k;i++){
            if(v[i]!=mex+1)
                break;
            mex=v[i];
        }
        mex++;

        auto id1=find(u.begin(), u.end(), mex)-u.begin()+1;

        int max=0;
        for(int i=0;i<=n-k;i++){
            if(v[i]>max)
                max=v[i];
        }

        auto id2=find(u.begin(), u.end(), max)-u.begin()+1;

        if(mex==max+1) cout << -1 << "\n";
        else cout << id1 << " " << id2 << "\n";
    }

    return 0;
}
