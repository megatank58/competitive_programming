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

        int maximum = 0;
        int minimum = INT32_MAX;
        
        for(int i = 0; i < n; i++) {
            int r;
            cin >> r;
            
            if (r > maximum)
                maximum = r;
            if (minimum > r)
                minimum = r;
        }

        if (minimum == maximum)
            cout << maximum << "\n";
        else {
            int bits = (int) floor(log2(maximum));
            int r = (int) pow(2, bits) - 1;
            
            while (minimum > r) {
                bits = (int) floor(log2(maximum - r));

                r += (int) pow(2, bits);
            }

            cout << (maximum | r) << "\n";
        }

        t--;
    }

    return 0;
}
