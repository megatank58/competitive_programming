#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;

        map<int, int> m;
        int minimum=INT32_MAX;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            m[r]++;
            if(r<minimum&&r!=0)
                minimum=r;
        }

        if(m[0]>0||n>minimum) cout<<n<<"\n";
        else cout<<0<<"\n";
    }

    return 0;
}
