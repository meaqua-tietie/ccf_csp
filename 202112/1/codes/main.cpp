#include <bits/stdc++.h>

int f(std::vector<int> &a, int x) {
    int left = 0, right = int(a.size() - 1);
    int res = -1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] <= x) {
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return res == -1 ? 0 : res;
}

int main(void) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n + 1);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i + 1];
    }

    int res = 0;
    for (int i = 0; i < m; ++i) {
        res += f(a, i);
    }

    std::cout << res << "\n";

    return 0;
}