#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int n = 0;

    cin >> n;

    if (n*(n+1)/2 % 2 == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        if (n % 2 == 0) {
            long long int i = 1;
            vector<long long int> u;
            vector<long long int> v;
            while (i != n/2 + 1) {
                if (i % 2 == 0) {
                    u.push_back(i);
                    u.push_back(n+1-i);
                } else {
                    v.push_back(i);
                    v.push_back(n+1-i);
                }
                i++;
            }

            cout << u.size() << "\n";
            for (auto z: u)
                cout << z << " ";
            cout << "\n";
            cout << v.size() << "\n";
            for (auto z: v)
                cout << z << " ";
            cout << "\n";
        } else {
            long long int i = 1;
            vector<long long int> u;
            vector<long long int> v;
            while (i != (n+1)/2 + 1) {
                if (i % 2 == 0) {
                    u.push_back(i);
                    u.push_back(n+1-i);
                } else {
                    v.push_back(i);
                    v.push_back(n+1-i);
                }
                i++;
            }

            u.pop_back();
            sort(u.begin(), u.end());
            sort(v.begin(), v.end());

            long long int sum = 0;
            for (long long int j = 0; j < u.size(); j++) {
                sum += u[j];
            }

            for (long long int j = 0; j < n*(n+1)/4 - sum; j++) {
                u[u.size() - j - 1] = u[u.size() - j - 1] ^ v[v.size() - j - 1];
                v[v.size() - j - 1] = u[u.size() - j - 1] ^ v[v.size() - j - 1];
                u[u.size() - j - 1] = u[u.size() - j - 1] ^ v[v.size() - j - 1];
            }

            cout << u.size() << "\n";
            for (auto z: u)
                cout << z << " ";
            cout << "\n";
            cout << v.size() << "\n";
            for (auto z: v)
                cout << z << " ";
            cout << "\n";
            
        }
    }

    return 0;
}
