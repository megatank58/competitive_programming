#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>> u = {{0,3,2,3},{3,4,1,2},{2,1,4,3},{3,2,3,2}};

    for(int i=4;i<n;i++) {
        u.push_back(vector<int>(i+1));
        for(int j=0;j<=i;j++) {
            auto r=INT32_MAX;
            if (j-2>=0)
                r=min(r,u[i-1][j-2]);
            if (j-1>=0)
                r=min(r,u[i-2][j-1]);
            if (j+2<i)
                r=min(r,u[i-1][j+2]);
            if (j+1<i)
                r=min(r,u[i-2][j+1]);
            u[i][j]=r+1;
        }
        for(int j=0;j<i;j++) u[j].push_back(u[i][j]);
    }

    if(n==4) {
        u[3][0]=5;
        u[0][3]=5;
    }

    for(auto x: u) {
        for(auto y: x) {
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}
