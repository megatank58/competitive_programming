#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int64_t max_seq_len = 1;
    int64_t cur_seq_len = 1;

    char prev_char = ' ';

    string s;

    cin >> s;

    for (char cur_char: s) {
        if (prev_char == cur_char) {
            cur_seq_len++;
            max_seq_len = max(max_seq_len, cur_seq_len);
            continue;
        }

        cur_seq_len = 1;
        prev_char = cur_char;
    }

    cout << max_seq_len;

    return 0;
}
