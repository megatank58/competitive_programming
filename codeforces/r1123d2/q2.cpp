#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int16_t n = 0;

    cin >> n;

    for (int16_t i = 0; i < n; i++) {
        int16_t len = 0;

        cin >> len;
        
        vector<int16_t> u(len);

        for (int16_t j = 0; j < len; j++) {
             cin >> u.at(j);
        }

        sort(u.begin(), u.end());

        vector<int16_t> v(len);
        int16_t index_offset = 0;

        while (len > 0) {
            int16_t highest_count = 0;
            int16_t k = u.at(len-1);
            vector<int16_t> indices;

            for (int16_t j = 0; len-1-j >= 0 && u.at(len-1-j) == k; j++) {
                v.at(j+index_offset) = u.at(len-1-j);
                indices.push_back(len-1-j);
                highest_count++;
            }

            for (auto j: indices) {
                u.erase(u.begin() + j);
            }

            index_offset += highest_count;

            indices.clear();
            len = u.size();

            int16_t counter = 0;
            int16_t skip_offset = 0;
            int16_t last_element = u[0];

            for (int16_t j = 0; j < len; j++) {
                if (u.at(j) == last_element) {
                    if (counter == highest_count) {
                        skip_offset += 1;
                        continue;
                    }
                    counter++;
                } else {
                    counter = 1;
                }
                v.at(j+index_offset-skip_offset) = u.at(j);
                last_element = u.at(j);
                indices.push_back(j);
            }

            index_offset += indices.size();

            counter = 0;
            for (auto j: indices) {
                u.erase(u.begin() + j - counter);
                counter++;
            }
            len = u.size();
        }

        for (int16_t k: v) {
            cout << k << " ";
        }

        cout << "\n";
    }

    return 0;
}
