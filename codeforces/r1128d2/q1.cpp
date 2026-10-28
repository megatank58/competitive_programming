#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;

    while(t>0) {
        int n;
        cin >> n;

        int first_one = -1;
        int last_one = -1;
        int counter = 0;
        
        for(int i = 0; i < n; i++) {
            char r;
            cin >> r;
            
            if (r == '1') {
                if (first_one == -1)
                    first_one = i;
                last_one = i;
                counter++;
            }
        }

        if (counter == 2)
            cout << 1 << "\n";
        else
            cout << last_one - first_one << "\n";

        t--;
    }

    return 0;
}
