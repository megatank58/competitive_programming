#include <bits/stdc++.h>
using namespace std;

int32_t mex(vector<int32_t> u, int32_t k) {
    int32_t last = u[0];
    int32_t count = 0;

    if (last != 0) {
        return 0;
    }

    for (int i = 0; i < u.size(); i++) {
        if (u[i] != last) {
            if (count < k)
                return last;
            else if (u[i] - last != 1)
                return last + 1;

            last = u[i];
            count = 1;
            continue;
        }

        last = u[i];
        count++;
    }

    if (last == 0 && count < k) {
        return 0;
    }

    return last + 1;
}

int32_t recurse(vector<int32_t> p, vector<int32_t> q, vector<int32_t> u, int32_t k, bool flag) {
    if (u.empty()) return mex(p, k) == mex(q, k);
    bool result = false;

    for (int i = u.size() - 1; i >= 0; i--) {
        auto r = u[i];
        u.pop_back();

        if (flag) {
            p.push_back(r);
        } else {
            q.push_back(r);
        }

        flag = !flag;
    
        result = result || recurse(p, q, u, k, flag);
    }

    return result;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int32_t t = 0;
    cin >> t;

    for (int32_t i = 0; i < t; i++) {
        int32_t n = 0, k = 0;
        cin >> n >> k;

        vector<int32_t> u(n);
        for (int j = 0; j < n; j++) cin >> u[j];

        vector<int32_t> p;
        vector<int32_t> q;
        bool flag = true;

        sort(u.begin(), u.end(), greater<int32_t>());

        if (recurse(p, q, u, k, true))
            cout << "NO\n";
        else
            cout << "YES\n";

    } 

    return 0;
}
