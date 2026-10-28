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

        int r1=0;
        int r2=0;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            r1+=c=='f'?1:0;
        }
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            r2+=c=='f'?1:0;
        }

        cout << abs(r1-r2) % 2 << "\n";
        
    }

    return 0;
}
