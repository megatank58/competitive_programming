#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>>t;

    while(t-->0) {
        int n,k;
        cin>>n>>k;

        map<int, int> m;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            m[r]++;
        }

        int mex=0;
        int rem=0;
        for(int i=0;i<=n;i++){
            if(m[i]>=k){
                m[i]-=k;
                mex=i+1;
                rem+=m[i];
            } else if(m[i]!=0&&m[i]+rem>=k){
                rem-=k-m[i];
                m[i]=0;
                mex=i+1;
            } else break;
        }
        cout << mex << "\n";
    }

    return 0;
}
