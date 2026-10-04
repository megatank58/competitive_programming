#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    auto n = 0;

    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        auto k = 0;

        std::cin >> k;

        auto range = std::views::iota(0, k - 1);
        auto r = std::ranges::to<std::vector>(range);

        string s;

        std::cin >> s;

        for (auto [j, u]: s | std::views::split(' ') | std::views::enumerate) {
            std::string_view sv(u);

            int v;
            std::from_chars(sv.data(), sv.data() + sv.size(), v);
            
            std::erase_if(r, [v, j](int x) {
               return x >= v*(j+1) || x < v*(j+1)+1;
            });

            std::cout << r.size();

            for (auto n: r) {
                std::cout << n << " ";
            }

            std::cout << "\n";
        }
    }

    return 0;
}
