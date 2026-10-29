#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>> u(n, vector<int>(n, -1));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            bool found = false;
            int x=0;
            while(!found) {
                if (find(u[i].begin(), u[i].end(), x) != u[i].end()) {
                    x++;
                    continue;
                }

                bool flag = false;
                for (int k=0;k<=i;k++) {
                    if (u[k][j]==x) {
                        x++;
                        flag = true;
                        break;
                    }
                }

                if (flag) continue;

                cout << x << " ";
                u[i][j]=x;
                found = true;
            }
        }
        cout << "\n";
    }

    return 0;
}
