#include <bits/stdc++.h>

using i64 = long long;

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	std::set<int> set;
	int res = 0;
	for (int i = 0, x; i < n; ++i) {
		std::cin >> x;
		res += (set.find(x - 1) != set.end()) + (set.find(x + 1) != set.end());
		set.insert(x);
	}

	std::cout << res << "\n";

	return 0;
}
